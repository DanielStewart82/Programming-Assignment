#include <stdio.h>
#include <stdlib.h>

void enigmaFunction(char *regularText, int n);

int main()
    {
    
    char regularText[]= "ABCDEFGHIJKLMN  poi tui O 235 PQRSTUVWXYZ abcdefghijklmnopqr 65 stuvwxyz";
    
    int n;
    
    n = (sizeof(regularText))/sizeof(regularText[0]);
     
    enigmaFunction(regularText, n);
    printf("%s\n", regularText);
    return 0;
    }
 
void enigmaFunction(char *regularText, int n)
    {
    
    int i;
    int key = -15;
    
        for( i=0; i <= (n-2) ; i++ )
    {        if(97<=regularText[i] && regularText[i]<=122){
             regularText[i]= regularText[i]-32;
    }
            if(65<=regularText[i] && regularText[i]<=90){
                
                regularText[i]= regularText[i]-65;
                regularText[i]=(regularText[i]+key);
    
                     if(regularText[i]<=0)
                     {
                     regularText[i]=regularText[i]+26;
                     }    
    
                        regularText[i]=regularText[i]%(26);
                        regularText[i]=regularText[i]+65;
                         }     

    }

  

}