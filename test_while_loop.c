#include <stdio.h>

void main(){
    int a = 40,b=4;
    while (a!=b)
        if(a>b)a=a-b;
    else b=b-a;
    printf("%d",a);
    
    
}