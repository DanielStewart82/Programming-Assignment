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
    int key = 1;
    for( i=0; i <= n ; i++ )
    {    if(regularText[i]>=89){
        regularText[i]= regularText[i]-20;
    }
       printf("%c", regularText[i]+key );
      
    }
    printf("\n" );
}