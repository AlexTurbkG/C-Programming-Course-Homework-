#ifndef SAFEINT_H
#define SAFEINT_H


typedef struct{
    int value;
    int errorflag;
}SafeResult;

SafeResult SafeAdd(int a, int b);
SafeResult SafeSubtract(int a, int b);
SafeResult SafeMultiply(int a, int b);
SafeResult SafeDivide(int a, int b);
SafeResult SafeStrToInt(const char str[]);

#endif