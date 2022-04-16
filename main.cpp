
#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include <windows.h>
#include "ShortcutProvider.h"

using namespace std;

using std::cout; using std::cerr;
using std::endl; using std::string;
using std::ifstream; using std::vector;

#define BIN_PATH "D:\\MyBin\\"

int main()
{
#define createShortcut( a , b , c , d , e , f , g , h) \
    if (ShortcutProvider::Create((LPSTR)(a), \
        (LPSTR)(b), \
        (LPSTR)(c), \
        (LPSTR)(d), \
        e, \
        (LPSTR)(f), \
        (LPSTR)(g), \
        h) < 0) { \
        exit(1); \
    } else { cout << a << endl; }

// File pointer
    fstream fin;
  
    // Open an existing file
    fin.open("E:\\MyProjects\\my-exec_001\\myshortcuts\\myshortcuts.csv", std::fstream::in );
  
    // Init the row count
    // of which the data is required
    int count = 0;
  
    // Read the Data from the file
    // as String Vector
    vector<string> row;
    string line, word, temp;
  
    while (getline(fin, line)) {
  
        row.clear();
  
        // read an entire row and
        // store it in a string variable 'line'
		//getline(fin, line);
		cout << line << "\n"  ;
  
        // used for breaking words
        stringstream s(line);
  
        // read every column data of a row and
        // store it in a string variable, 'word'
        while (getline(s, word, ',')) {
  
            // add all the column data
            // of a row to a vector
            row.push_back(word);
        }
  
        // convert string to integer for comparision
        //roll2 = stoi(row[0]);
  
 
            // Print the found data
            count += 1;
            cout << "pszTargetfile: " << row[0] << " : \n";
            cout << "pszTargetargs: " << row[1] << "\n";
            cout << "pszLinkfile: " << row[2] << "\n";
            cout << "pszDescription: " << row[3] << "\n";
            cout << "iShowmode: " << row[4] << "\n";
            cout << "pszCurdir: " << row[5] << "\n";
            cout << "pszIconfile: " << row[6] << "\n";
            cout << "iIconindex: " << row[7] << "\n";
    }
    if (count == 0)
        cout << "Record not found\n";
	

        createShortcut("E:\\Qt\\Qt5.12.10\\Tools\\QtCreator\\bin\\qtcreator.exe",
            "",
            "D:\\MyBin\\QC.lnk",
            "Qt Creator",
            SW_NORMAL,
            "%USERPROFILE%",
            "E:\\Qt\\Qt5.12.10\\Tools\\QtCreator\\bin\\qtcreator.exe",
            0)
        createShortcut("%comspec%",
            " /k \"D:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\Common7\\Tools\\VsDevCmd.bat\"",
            "D:\\MyBin\\vscmd.lnk",
            "Open Visual Studio 2022 Tools Command Prompt",
            SW_NORMAL,
            "%USERPROFILE%",
            "%comspec%",
            0)
        createShortcut("%comspec%",
            " /k \"D:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Auxiliary\\Build\\vcvars64.bat\"",
            "D:\\MyBin\\vscmd-x64.lnk",
            "Open Visual Studio 2022 Tools Command Prompt for targeting x64",
            SW_NORMAL,
            "%USERPROFILE%",
            "%comspec%",
            0);
        createShortcut( "D:\\PortableApps\\7-ZipPortable\\App\\7-Zip64\\7z.exe"
           , ""
           , BIN_PATH "7z.lnk"
           , "Portable 7z"
           , SW_NORMAL
           , "%USERPROFILE%"
           , "D:\\PortableApps\\7-ZipPortable\\App\\7-Zip64\\7zFM.exe"
           , 0 );
    return 0;

}
