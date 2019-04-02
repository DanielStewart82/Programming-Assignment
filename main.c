
#include <stdio.h>
#include <stdlib.h>

char encryptionFunction(char v);

int main()
{
    //need to create a string to hold the message to be encrypted.  Around 200 characters.
    char originalString[] = "THISISATESTCODE";
    char encryptedString;
    int n;
    n = sizeof(originalString)/sizeof(originalString[0]);
     
     
     
    printf("Enter text to be encrypted:\n");
//    scanf("%s", originalString);  //user will enter text here and it should be stored in the encryptedString
   printf("%s\n", originalString);
   
   printf("Enter a key between 0 and 25\n");
   printf("You have entered the number 5");

   printf("%s\n", encryptionFunction);
   return 0;
   
 
}
char encryptionFunction(char v){   //this function takes the original value of each ascii character
        int i;
        for(i=0 ; i <= n ; i++ ){// and adds the value of the key, which is set to five at currently.
        return v + 5;
        
            
        }    
    
}
/*  Step 1 Declare Function
    Step 2 declare string where message will be stored
    Step 3 run the encryption function
    Step 4 print the encrypted message to the screen
    Step 5 Define the Encryption Function: This will take each ASCII character
    and add the value of the key to each.  Will do more mods to it later.*/
   