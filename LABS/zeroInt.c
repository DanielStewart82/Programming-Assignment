#include <stdio.h>

void zeroInt(int *x);

int main(){
    
   int x=78;
   printf("%d\n", x);
   zeroInt(&x);
   printf("%d\n", x);
    
}
void zeroInt(int *x){
    int zero = 0;
    *x = zero;
    
    
}