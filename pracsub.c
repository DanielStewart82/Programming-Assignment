#include <stdio.h>

void decrypt(char *encryptedMessage, char *substitutionString);

int main()
{
   char encryptedMessage[]="HSTQLT UTZ DOSA QZ ZIT LIGHL";
   char substitutionString[]="QWERTYUIOPASDFGHJKLZXCVBNM";

    decrypt(encryptedMessage, substitutionString);
    printf("\n");
    return 0;
    
}
void decrypt(char *encryptedMessage, char *substitutionString)
{
    int i;
    int z;
    char decrypt;
    for(i=0; encryptedMessage[i]!='\0';i++)
    {
        if(encryptedMessage[i]<=90  && encryptedMessage[i]>=65)
        {

            for(z=0; substitutionString[z]!=encryptedMessage[i];z++)
            {
                decrypt = z;
            }
            decrypt = z + 65;
            printf("%c", decrypt);
        }
        else
        {
            printf("%c", encryptedMessage[i]);
        }
    }
    
    
}