#include <stdio.h>

void m(int k){
    printf("hi");
}
void m(double k){
    printf("hello");
}
int main(){
    m(3);
}