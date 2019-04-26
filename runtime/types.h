//
// Created by ASUS on 25/04/2019.
//


#ifndef BLAZEVM_TYPES_H
#define BLAZEVM_TYPES_H

#include <memory>

using namespace std;

#if defined(_WIN64)
    typedef __int64 LONG_PTR;
#else
    typedef long LONG_PTR;
#endif

typedef int BOOL;

typedef unsigned int u4;
typedef unsigned short u2;
typedef unsigned char u1;

typedef __int64 i8;
typedef unsigned __int64 u64;

typedef int i4;
typedef short i2;

typedef float f4;
typedef double f8;

template <class T>
    u4 LOINT64(T val) {
        return val & x0FFFFFFFF;
    }

template <class T>
    u4 HIINT64(T val) {
        return val >> 32;
    }

template <class T>
    u4 getu4(T val) {
        return (u4)((u4) val[0] << 24 & 0xFF000000 | (u4)(val[1] << 16) & 0x00FF0000 | (u4) val[2] << 8 & 0x0000FF00 | (u4) val[3] & 0x000000FF);
    }

template <class T>
    u2 getu2(T val) {
        return (u2) ((u2) val[1] << 16 & 0x0000FF00 | val[0])
    }

template <class T>
    i8 MAKEI8(T high, T low) {
       return (i8) ((i8) high << 32 | (i8) low);
    }

template <class T>
    i4 geti4(T val) {
        return (i4) ((u4) val[0] << 24 | (u4) val[1] << 16 | (u4) val[2] << 8 | (u4) val[3]);
    }

template <class T>
    i2 geti2(T val) {
        return (i2) ((u2) val[0] << 8 | val[1]);
    }

template <class T>
    f4 getf4(T val) {

    }

template <class T>
    u4 castu4(T val) {
       return *((u4 *) val);
    }

template <class T>
    u2 castu2(T val) {
        return *((u2 *) val);
    }

template <class T>
    i4 casti4(T val) {
        return *((i4 *) val)
    }

template <class T>
    i2 casti2(T val) {
        return *((i2 *) val);
    }

class BlazeClass;
struct method_info_ex;

class Object {
    public:
        shared_ptr<LONG_PTR> heapPtr;
        u1 type;
};

union Variable {
    u1 charValue;
    u2 shortValue;
    u4 intValue;
    f4 floatValue;
    i8 ptrValue;
    Object object;
};

class Frame {
    public:
        static Variable *pOpStack;
        static Frame *pBaseFrame;
        BlazeClass *pClass;
        method_info_ex *pMethod;
        u4 pc;
        i2 sp;
        Variable *stack;

        Frame() {
            sp = -1;
            pClass = NULL;
            pc = 0;
            stack = NULL;
            pBaseFrame = NULL;
            pOpStack = NULL;
        }

        Frame(i2 sp) {
            this->sp = sp;
            pClass = NULL;
            pc = 0;
            stack = NULL;
        }
};

#endif //BLAZEVM_TYPES_H
