/*Welcome to the ENGG1003 Programming Assignment One for Semester 1 of 2019. 
This guide and the following notes are intended to be read and understood by a student 
who is repeating the course.*/


#include <stdio.h>


/*This program utilises four functions to operate.
Functions must be declared at the beginning of the program.
The function definitions are placed at the end of the program.  
Directly underneath this comment are the four function declarations.*/


void enigmaFunction(char *regularText, int n, int encryptKey);  //Encryption with rotation cipher.
void decryptionFunction(char *decryptedText, int o, int decryptKey); //Decryption with rotation cipher.
void substitutionEncryption(char *messageString, char *substitutionString);//Encryption with substitution cipher.
void decrypt(char *encryptedMessage, char *substitutionString); //Decryption with substitution cipher.


int main()
    {
        int encryptKey;  //Users will be prompted to input a number between 0 & 25 to rotate the alphabet.
        int decryptKey;  //Users will be prompted to input a number between 0 & 25 to un-rotate the alphabet.
        int task;        //Used for task selection in the menu.  User will input this value.
        printf("*****************************************************************************************************************\n");
        printf("Welcome to the ENGG1003 Programming Assignment One of Semester One 2019.\n");
        printf("This program was written by me Daniel Stewart.  Student Number: c3298707\n");
        printf("All work is the work of myself and the program was completed on 28th April 2019.\n");
        printf("\n");
        printf("\n");
        printf("This program will decrypt or encrypt a message using either a rotation cipher or a substitution cipher.\n");
        printf("All inputs will need to be hardcoded prior to running this program.\n");
        printf("\n");
        printf("Task selection:\n");
        printf("\n");
        printf("Task 1: Encryption with rotation cipher\n");
        printf("Task 2: Decryption with rotation cipher\n");
        printf("Task 3: Encryption with substitution cipher\n");
        printf("Task 4: Decryption with substitution cipher\n");
        printf("\n");
        printf("Please make your selection now by entering the task number you wish to select then press enter.\n");
        scanf("%d", &task);
        
       
/*Between line 51 and line 69 are the strings that the program reads from.
  The program does not currently support user input from stdin.  
  All encryption/decryption needs to be hardcoded.
  Prior to running the program the user will need to enter the data manually and then compile.*/
 
  
    char regularText[]= "MON MOTHMA: THE DATA BROUGHT TO US BY THE BOTHAN SPIES PINPOINTS THE EXACT LOCATION OF THE EMPEROR'S NEW BATTLE STATION. WE ALSO KNOW THAT THE WEAPON SYSTEMS OF THIS DEATH STAR ARE NOT YET OPERATIONAL. WITH THE IMPERIAL FLEET SPREAD THROUGHOUT THE GALAXY IN A VAIN EFFORT TO ENGAGE US, IT ISRELATIVELY UNPROTECTED. BUT MOST IMPORTANT OF ALL, WE'VE LEARNED THAT THE EMPEROR HIMSELF IS PERSONALLY OVERSEEING THE FINAL STAGES OF THE CONSTRUCTION OF THIS DEATH STAR. MANY BOTHANS DIED TO BRING US THIS INFORMATION.";
    //Text to be encrypted with the rotation cipher needs to be entered in the string directly above this line.
    int n;
    n = (sizeof(regularText))/sizeof(regularText[0]);  //The purpose of this line of code is to allow the program to 
                                                       //determine the number of elements in the string.
                                                       //n will count the number of elements and tell the program
                                                       //to stop processing the data at the inverted commas.
                                                       
    
    char decryptedText[]= "JLK JLQEJX: QEB AXQX YOLRDEQ QL RP YV QEB YLQEXK PMFBP MFKMLFKQP QEB BUXZQ ILZXQFLK LC QEB BJMBOLO'P KBT YXQQIB PQXQFLK. TB XIPL HKLT QEXQ QEB TBXMLK PVPQBJP LC QEFP ABXQE PQXO XOB KLQ VBQ LMBOXQFLKXI. TFQE QEB FJMBOFXI CIBBQ PMOBXA QEOLRDELRQ QEB DXIXUV FK X SXFK BCCLOQ QL BKDXDB RP, FQ FPOBIXQFSBIV RKMOLQBZQBA. YRQ JLPQ FJMLOQXKQ LC XII, TB'SB IBXOKBA QEXQ QEB BJMBOLO EFJPBIC FP MBOPLKXIIV LSBOPBBFKD QEB CFKXI PQXDBP LC QEB ZLKPQORZQFLK LC QEFP ABXQE PQXO. JXKV YLQEXKP AFBA QL YOFKD RP QEFP FKCLOJXQFLK";    //Text to be encrypted with the rotation cipher needs to be entered in the string directly above this line.
    //Text to be decrypted with the rotation cipher needs to be entered in the string directly above this line.
    int o;
    o = (sizeof(decryptedText))/sizeof(decryptedText[0]);
    
    char substitutionString[]="QWERTYUIOPASDFGHJKLZXCVBNM";  //This is where the substitution alphabet needs to be entered.  Decryption and encryption both rely on the same string for the substitution alphabet.
    
    char messageString[]= "PLEASE GET MILK AT THE SHOPS";    //The message for the substitution encryption needs to be entered here.
    
    char encryptedMessage[]="HSTQLT UTZ DOSA QZ ZIT LIGHL";  //The message for the substitution decryption needs to be entered here.
   
    
    /*The program uses a simple menu system to select between tasks.
     The system uses a switch statement.  The user enters an integer
     between 1 & 4.  The value is stored in int task.
     The program will read the integer and direct the user to 
     their desired function.
     After the specific function has been run a break
     statement is used to end the program.*/
    
    switch(task)
        {
          case 1:
              printf("*****************************************************************************************************************\n");
              printf("The hardcoded message you wish to encrypt with the rotation cipher is:\n");
              printf("\n");       
              printf("%s\n", regularText);
              printf("\n");
              printf("Enter an integer between 0 and 25 that you wish to rotate the alphabet by:\n");
              scanf("%d", &encryptKey);
              printf("You have chosen to rotate the alphabet by a value of: %d\n", encryptKey);
              printf("\n");
              printf("Your encrypted message is:\n");
              printf("\n");
          
              enigmaFunction(regularText, n, encryptKey);  //This is the function call.
                 
              printf("%s\n", regularText);
              printf("\n");
              printf("End program.\n");
            
          break;
          
            case 2:
              printf("*****************************************************************************************************************\n");
              printf("The hardcoded message you wish to decrypt with the rotation cipher is:\n");
              printf("\n");
              printf("%s\n", decryptedText);
              printf("\n");
              printf("Enter an integer between 0 and 25 that you wish to rotate the alphabet by:\n");
              printf("\n");
              scanf("%d", &decryptKey);
              printf("\n");
              printf("You have chosen to rotate the alphabet by a value of:%d\n", decryptKey);
              printf("\n");
              printf("Your decrypted message is:\n");
              printf("\n");
          
              decryptionFunction(decryptedText, o, decryptKey);  //This is the function call.
              
              printf("%s\n", decryptedText);
              printf("\n");
                 
                 
              printf("End program.\n");
            
          break;
          
          case 3:
              printf("*****************************************************************************************************************\n");     
              printf("The hardcoded message you wish to encrypt with the substitution cipher is:\n");
              printf("\n");
              printf("%s\n", messageString);
              printf("\n");
              printf("The hardcoded substitution you have entered is:%s\n", substitutionString); 
              printf("\n");
              printf("Your encrypted message is:\n");
              printf("\n");
                                                    
              substitutionEncryption(messageString, substitutionString);    //This is the function call.
              
              printf("\n");
              printf("\n");
              printf("End program.\n");
            
          break;
            
            case 4:
              printf("*****************************************************************************************************************\n");        
              printf("The hardcoded message you wish to decrypt with the substitution cipher is:\n");
              printf("\n");
              printf("%s\n", encryptedMessage);
              printf("\n");
              printf("The hardcoded substitution you have entered is:%s\n", substitutionString); 
              printf("\n");
              printf("Your decrypted message is:\n");
              printf("\n");
              
              decrypt(encryptedMessage, substitutionString);    //This is the function call.
              
              printf("\n");
              printf("\n");
              printf("End program.\n");
            
          break;
          
              default:  //If the user enters something that is not an integer between 1 & 4 the program will switch to default and end.
              printf("Invalid selection.  %d not recognised.\n", task);
              break;
        }
    }   //Effectively the program ends here.  From this point on are the function declarations.
    
void enigmaFunction(char *regularText, int n, int encryptKey)   //This is the function for rotation cipher encryption.
{
    int i;
    for( i=0; i <= (n-2) ; i++ )
    {
        if(97<=regularText[i] && regularText[i]<=122)           //This function works by taking lower case letters and converting them to uppercase.
        {
            regularText[i] = regularText[i]-32;                
        }
        if(65<=regularText[i] && regularText[i]<=90)
        {                                                       //Once the letter is upper case 65 is subracted from its value which will 
            regularText[i]= regularText[i]-65;                  //give it a new value of between 0 & 25.
            regularText[i]=(regularText[i]+encryptKey);         //The key the user has chosen is added to the value.
            regularText[i]=regularText[i]%(26);                 //We take the modulus of this which will return the remainder of the division.  This is how the alphabet is able to rotate from Z to A without ending up with funky symbols.
            regularText[i]=regularText[i]+65;                   //Adding 65 to the modulus will give us a capital letter.
        }                           
     }
}                                                               //The for loop provides a way of doing this for every letter in the string.  White space and other characters are left alone.
    
void decryptionFunction(char *decryptedText, int o, int decryptKey)     //This is the function for rotation cipher decryption.
{                                                                       //It works in a very similar way as the encryption cipher but has a few small differences.
    int j;   
    for( j=0; j <= (o-2) ; j++ )
    {
        if(97<=decryptedText[j] && decryptedText[j]<=122)               
        {
            decryptedText[j] = decryptedText[j]-32;
        }
        if(65<=decryptedText[j] && decryptedText[j]<=90)
        {                
            decryptedText[j]= decryptedText[j]-65;                      //It still subtracts the value of 65.  
            decryptedText[j]=decryptedText[j]-decryptKey+26;            //But at this point we subtract the vaue of the decrypt key and then add 26 so 
            decryptedText[j]=decryptedText[j]%(26);                     //that the alphabet will rotate and that we don't end up with funky characters.
            decryptedText[j]=decryptedText[j]+65;
        }     
    }
}
    
void substitutionEncryption(char *messageString, char *substitutionString)      //This is the function for substitution cipher encryption.
{
    int i, n;                                                                   //integers i & n are local variables inside this function.
    for(i=0; messageString[i]!= '\0' ; i++)                                     //messageString[i]!= '\0'  This line will ensure the program stops reading the string when it sees inverted commas.
    {                                                                           //In the first two functions I used sizeof to determine the end of the string.  In this function and the next I used this !=\0  (not equal to NULL).
        if(messageString[i]<= 90 && messageString[i]>=65)                       //Program will only encrypt capital letters with ASCII value between [65,90].
        {            
            n = messageString[i]-65;                                            //Program will read the value of the message letter and subtract 65.
            printf("%c", substitutionString[n]);                                //The value of n is now between 0 & 25.  Program will print whichever letter is in the position between 0 & 25 of the substitution string.
        }
        else                                                                    //If the character in the string to be deciphered is not a capital letter it will be ignored.
        {
            printf("%c", messageString[i]);                                     //White space and other characters will be printed to screen in their normal state.
        }    
    }
}
    
void decrypt(char *encryptedMessage, char *substitutionString)                  //This is the function for substitution cipher decryption.
{
    int i, z;                                                                   //Local variables.
    char decrypt;
    for(i=0; encryptedMessage[i]!='\0';i++)                                     //messageString[i]!= '\0'  This line will ensure the program stops reading the string when it sees inverted commas.
    {
        if(encryptedMessage[i]<=90  && encryptedMessage[i]>=65)                 //Program will only decrypt capital letters with ASCII value between [65,90].
        {
            for(z=0; substitutionString[z]!=encryptedMessage[i];z++)            //I've introduced another for loop here.  This one will cycle through the substitution 
            {                                                                   //string and check the values of the substitution string to the message string.  
                decrypt = z;                                                    //If it finds a match it will add 65 to the value and print the new character to the screen.
            }
            decrypt = z + 65;
            printf("%c", decrypt);                                              //Prints the decrypted character to the screen.
        }
        else
        {
            printf("%c", encryptedMessage[i]);                                  //If the character in the string to be deciphered is not a capital letter it will be ignored.
        }
    }
}