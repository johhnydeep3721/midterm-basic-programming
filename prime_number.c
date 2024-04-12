#include <stdio.h>
#include <stdbool.h>

int main(){
    int n = 5;
    for (int i = 1; i < n; i++)
    {
        bool isprime = true;
        for (int j = 2;j < i; j++)
        {
            if(i%j==0){
                isprime = false;
            }
        
        }
        if(isprime)
        {
            printf("\n %d",isprime);
        }
    }
    
}