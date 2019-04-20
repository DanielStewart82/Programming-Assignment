#include <stdio.h>

void ekey(char *messageString, char *substitutionString);


int main()
{
    
char substitutionString[]="QWERTYUIOPASDFGHJKLZXCVBNM";
char messageString[]= "PLEASE GET MILK AT THE SHOPS";
    
    ekey(messageString, substitutionString);    
    printf("\n");
    return 0;
}


void ekey(char *messageString, char *substitutionString)
{
    int i, n;
    for(i=0; messageString[i]!= '\0' ; i++)
    {
        if(messageString[i]<= 90 && messageString[i]>=65)
        {            
             n=messageString[i]-65; 
             printf("%c", substitutionString[n]);
        }
             else
             {
                printf("%c", messageString[i]);

             }
    
    
    }
}