
#include <stdio.h>
#include <stdlib.h>

int main()
{
    //need to create a string to hold the message to be encrypted.  Around 200 characters.
    char encryptedString[200];
    
    printf("Enter text to be encrypted:\n");
    scanf("%s", encryptedString);  //user will enter text here and it should be stored in the encryptedString
   printf("%s", encryptedString);
   
   return 0;
}
