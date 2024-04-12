#include <stdio.h>
#include <math.h>

void test(){
    int a = 10;
    int b = 5;
    printf("%d,%d,\n",a,b*2);
    return;
    printf("%d,%d",a*2,b);
}
int main(){
    test();
    return 0;
}