#include <stdio.h>

int main(){
    int n =2;
    float sum = 0.0;
    for(int i=1;i<=n;i++){
        sum =sum + 1/i;

    }
    printf("%f",sum);
}