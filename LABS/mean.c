#include <stdio.h>

void mean(int *a, int *b, int *c);

int main(){
    int a = 3;
    int b = 8;
    int c = 6;
    
    printf("Int A:%d  Int B:%d  Int:%d\n", a, b, c);
    mean(&a, &b, &c); 
    printf("Int A:%d  Int B:%d  Int:%d\n", a, b, c);
    
}
void mean(int *a, int *b, int *c){
    int mean;
    mean =((*a)+(*b)+(*c))/3 ;
    *a = mean;
    *b = 0 ;
    *c = 0 ;
    
}