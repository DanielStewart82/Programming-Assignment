#include <stdio.h>
#include <stdlib.h>

void myFunction(char *myString, int n);

int main()
    {
    
    char myString[]= "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    
    int n;
    
    n = (sizeof(myString))-1;
     
    myFunction(myString, n);
   
    return 0;
    }

void myFunction(char *myString, int n)
    {
    int i;
    int key = 1;
    for( i=0; i <= n ; i++ )
    {    if(myString[i]>=89){
        myString[i]= myString[i]-20;
    }
       printf("%c", myString[i]+key );
      
    }
    printf("\n" );
}