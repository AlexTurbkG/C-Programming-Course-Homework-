#ifndef TRANSFORAMTION_H
#define TRANSFORMATION_H

typedef struct{
    long result;
    char error[100];
} Transformation;

Transformation StringToLong(char str[20]);


#endif