//
// Created by Sairam on 03-12-2021.
//

#ifndef TESTPROJECT_OBJECT_H
#define TESTPROJECT_OBJECT_H

#include "gstring.h"

class Object {
public:
    virtual void _loop(const float delta) {};

    virtual void _ready() {};

    virtual void _exit() {};

    int id = 0;

    bool operator==(const Object *object1) const {
        return object1->id == id;
    }
};


#endif //TESTPROJECT_OBJECT_H
