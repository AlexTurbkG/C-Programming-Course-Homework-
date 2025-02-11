#ifndef SCHOOLCLASS_H
#define SCHOOLCLASS_H
#include "person.h"

typedef struct {
   Person students[26];
   char class;
   int class_number;
   Person teacher;
    
} SchoolClass;
#endif