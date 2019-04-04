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
    {    if(97<=regularText[i] && regularText[i]<=122){
        regularText[i]= regularText[i]-32;
    }
      
    
      printf("%c", regularText[i]+key );
      
    
    printf("\n" );
}
