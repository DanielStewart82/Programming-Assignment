#include <stdio.h>

void swap(int *a, int *b);

int main(){
    int a = 5;
    int b = 9;
    
    printf("Int A:%d   Int B:%d\n", a, b);
    swap(&a,&b);
    printf("Int A:%d   Int B:%d\n", a, b);
    swap(&a,&b);
    printf("Int A:%d   Int B:%d\n", a, b);
    
}
void swap(int *a, int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}