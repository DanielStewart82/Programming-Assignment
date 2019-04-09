#include <stdio.h>
#include <stdlib.h>

void enigmaFunction(char *regularText, int n);

int main()
    {
    
    char regularText[]= "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    
    int n;
    
    n = (sizeof(regularText))/sizeof(regularText[0]);
     
    enigmaFunction(regularText, n);
   
    return 0;
    }

void enigmaFunction(char *regularText, int n)
    {
    int i;
    int key = 0;
    for( i=0; i <= n ; i++ )
    {    if(97<=regularText[i] && regularText[i]<=122){
        regularText[i]= regularText[i]-32;
       
    }
      
    regularText[i]= regularText[i]-65;
    regularText[i]=(regularText[i]+key)%(26);
    regularText[i]=regularText[i]+65;
    printf("%c", regularText[i] );
      
    
   // printf("\n" );
}}
