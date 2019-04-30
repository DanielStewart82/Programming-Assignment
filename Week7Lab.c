#include <stdio.h>

int zeroLarger(unsigned int *a, unsigned int *b);

int main()
{
    int x=2, y=10; 
    printf("x:%d, y:%d\n", x, y);
    printf("return:%d\n", zeroLarger(&x, &y));
    printf("x:%d, y:%d\n", x, y);
   return 0;
}   
int zeroLarger(unsigned int *a, unsigned int *b){
    unsigned int larger;
    if( *a < *b){
        larger = *b;
        *b = 0;
        }
        else{
        larger = *a;
        *a = 0;
    }


  return larger;      
}
 
