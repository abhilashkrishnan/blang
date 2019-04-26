//
// Created by ASUS on 26/04/2019.
//

#include "FilePathManager.h"

FilePathManager::FilePathManager(void) {}

FilePathManager::~FilePathManager(void) {}

bool IsPathExist(const string &s)
{
    struct stat buffer;
    return (stat (s.c_str(), &buffer) == 0);
}

string GetCurrentWorkingDir( void ) {
    char buff[FILENAME_MAX];
    GetCurrentDir( buff, FILENAME_MAX );
    string current_working_dir(buff);
    return current_working_dir;
}

BOOL FilePathManager::GetAbsolutePath(string strRelativePath, string& strAbsolutePath) {
    string cwd = GetCurrentWorkingDir();
    strAbsolutePath = fs::path(cwd + "/" + strRelativePath).string();
    return IsPathExist(strAbsolutePath)? 1 : 0;
}

