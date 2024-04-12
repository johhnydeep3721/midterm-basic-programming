#include <stdio.h>

int main(){
    const int a = 5;
    const int *prt;
    prt = &a;
    *prt = 10;
    printf("%d\n",a);
    return 0;

}