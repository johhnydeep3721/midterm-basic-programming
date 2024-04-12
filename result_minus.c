#include <stdio.h>

int main(){
    int n = 5;
    int result = 0;
    for (int i = n; i>0; i--)
    {
        result +=i;
    }
    printf("%d",result);
    
}