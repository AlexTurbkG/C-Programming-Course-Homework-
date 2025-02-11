#include <stdio.h>
#include "math.h"


int Factoriel(int a){
    int factoriel = 1;
    for(int i = 1;i <= a;i++){
        factoriel *= i;
    }
    return factoriel;
}
