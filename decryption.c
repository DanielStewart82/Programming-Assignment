#include <stdio.h>
#include <stdlib.h>

void decryptionFunction(char *decryptedText, int o);

int main()
    {
    
    char decryptedText[]= "EBIIL YBK, ELT XOB VLR QLAXV?";
    
    int o;
    
    o = (sizeof(decryptedText))/sizeof(decryptedText[0]);
     
    decryptionFunction(decryptedText, o);
    printf("%s\n", decryptedText);
    return 0;
    }
 
void decryptionFunction(char *decryptedText, int o)
    {
    int i;
    int key = 23;
    
        for( i=0; i <= (o-2) ; i++ )
        {
            if(97<=decryptedText[i] && decryptedText[i]<=122){
            decryptedText[i] = decryptedText[i]-32;
        }
            if(65<=decryptedText[i] && decryptedText[i]<=90)
            {                
                decryptedText[i]= decryptedText[i]-65;
                decryptedText[i]=(decryptedText[i]-key);
    
                decryptedText[i]=decryptedText[i]%(26);
                if(decryptedText[i]<0)
                {
                     decryptedText[i]=decryptedText[i]+26;
                }
                decryptedText[i]=decryptedText[i]+65;
            }     
            
       
            }

           




}