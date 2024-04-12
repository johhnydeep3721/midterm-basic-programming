#include <stdio.h>

int fc1(int a,int b){
    a = a*2;
    b = b+a;
    return a;

}

int main(){
    int a = 10;
    int b = 20;
    a = fc1(a,b);
    printf("%d,%d",a,b);
    return 0;
}