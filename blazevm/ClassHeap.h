//
// Created by ASUS on 26/04/2019.
//

#ifndef BLAZEVM_CLASSHEAP_H
#define BLAZEVM_CLASSHEAP_H

#include <map>
#include "types.h"

using namespace std;

class BlazeClass;
class FilePathManager;

class ClassHeap {
    map<char*, BlazeClass*> m_ClassMap;
    FilePathManager *pFilePathManager;

    public:
        ClassHeap();
        virtual ~ClassHeap();

        BOOL AddClass(BlazeClass *pBlazeClass);
        BlazeClass* GetClass(string strClassName);
        BOOL LoadClass(string strClassName, BlazeClass* pClass);
};


#endif //BLAZEVM_CLASSHEAP_H
