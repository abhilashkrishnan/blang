//
// Created by ASUS on 26/04/2019.
//

#ifndef BLAZEVM_FILEPATHMANAGER_H
#define BLAZEVM_FILEPATHMANAGER_H

#define WINDOWS  /* uncomment this line to use it for windows.*/
#ifdef WINDOWS
    #include <direct.h>
    #define GetCurrentDir _getcwd
#else
    #include <unistd.h>
    #define GetCurrentDir getcwd
#endif

#include<iostream>
#include <sys/stat.h>
#include "types.h"

using namespace std;

class FilePathManager {
    public:
        FilePathManager(void);
        ~FilePathManager();
        bool IsPathExist(const string &s);
        BOOL GetAbsolutePath(string strRelativePath, string& strAbsolutePath);
        string GetCurrentWorkingDir( void );
};


#endif //BLAZEVM_FILEPATHMANAGER_H
