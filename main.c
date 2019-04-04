#include <stdio.h>
#include <stdlib.h>

void myFunction(char *myString, int n);

int main()
{
    
    char myString[]= "THISISATESTCODE";
    
    int n;
    
    n = (sizeof(myString))/(sizeof(myString[0]));
     
    myFunction(myString, n) ;
    
    return 0;
   
}
void myFunction(char *myString, int n){
    int i;
    int key = 0;
    for( i=0; i <= n ; i++ ){
       printf("%c", myString[i]+key);
        
    }
}