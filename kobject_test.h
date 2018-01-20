#ifndef kobject_test_h
#define kobject_test_h

#include <linux/kobject.h>

struct sKobj {
    struct kobject  kobj;
    char  *name;
    int    val;
};

#endif