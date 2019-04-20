#include <stdio.h>

void ekey(char *messageString, char *substitutionString);


int main(){
    
char substitutionString[]="QWERTYUIOPASDFGHJKLZXCVBNM";

char messageString[]= "PLEASE GET MILK AT THE SHOPS";
    //int x;
   // x = (sizeof(messageString))/(sizeof(messageString[0]));    

    ekey(messageString, substitutionString);    
    printf("\n");
    //printf("%s\n", messageString);
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
         //messageString[i]=messageString[substitutionString[n]];
           printf("%c", substitutionString[n]);
        }
        else
        {
            printf("%c", messageString[i]);

        }
    
    
    }
}