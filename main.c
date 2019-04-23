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
        int encryptKey;  //users will be prompted to input a number between 0 & 25 to rotate the alphabet.
        int decryptKey;  //users will be prompted to input a number between 0 & 25 to un-rotate the alphabet.
        int task;        //used for task selection in the menu.  User will input this value.
        printf("*****************************************************************************************************************\n");
        printf("Welcome to the ENGG1003 Programming Assignment.\n");
        printf("This program was written by Daniel Stewart.  Student Number: c3298707\n");
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
       
   /*  Between line 45 and line 57 is where the text that users wish to encrypt or decrypt
   needs to be inputed.  
        
        */
    char regularText[]= "MON MOTHMA: THE DATA BROUGHT TO US BY THE BOTHAN SPIES PINPOINTS THE EXACT LOCATION OF THE EMPEROR'S NEW BATTLE STATION. WE ALSO KNOW THAT THE WEAPON SYSTEMS OF THIS DEATH STAR ARE NOT YET OPERATIONAL. WITH THE IMPERIAL FLEET SPREAD THROUGHOUT THE GALAXY IN A VAIN EFFORT TO ENGAGE US, IT ISRELATIVELY UNPROTECTED. BUT MOST IMPORTANT OF ALL, WE'VE LEARNED THAT THE EMPEROR HIMSELF IS PERSONALLY OVERSEEING THE FINAL STAGES OF THE CONSTRUCTION OF THIS DEATH STAR. MANY BOTHANS DIED TO BRING US THIS INFORMATION.";
    int n;
    n = (sizeof(regularText))/sizeof(regularText[0]);
    
    char decryptedText[]= "TVU TVAOTH: AOL KHAH IYVBNOA AV BZ IF AOL IVAOHU ZWPLZ WPUWVPUAZ AOL LEHJA SVJHAPVU VM AOL LTWLYVY'Z ULD IHAASL ZAHAPVU. DL HSZV RUVD AOHA AOL DLHWVU ZFZALTZ VM AOPZ KLHAO ZAHY HYL UVA FLA VWLYHAPVUHS. DPAO AOL PTWLYPHS MSLLA ZWYLHK AOYVBNOVBA AOL NHSHEF PU H CHPU LMMVYA AV LUNHNL BZ, PA PZ YLSHAPCLSF BUWYVALJALK. IBA TVZA PTWVYAHUA VM HSS, DL'CL SLHYULK AOHA AOL LTWLYVY OPTZLSM PZ WLYZVUHSSF VCLYZLLPUN AOL MPUHS ZAHNLZ VM AOL JVUZAYBJAPVU VM AOPZ KLHAO ZAHY. THUF IVAOHUZ KPLK AV IYPUN BZ AOPZ PUMVYTHAPVU.";
    int o;
    o = (sizeof(decryptedText))/sizeof(decryptedText[0]);
    
    char substitutionString[]="QWERTYUIOPASDFGHJKLZXCVBNM";
    
    char messageString[]= "PLEASE GET MILK AT THE SHOPS";
    
    char encryptedMessage[]="HSTQLT UTZ DOSA QZ ZIT LIGHL";
   
    
    
    
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
          
              enigmaFunction(regularText, n, encryptKey);
                 
                 
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
          
              decryptionFunction(decryptedText, o, decryptKey);
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
          
                                           
              substitutionEncryption(messageString, substitutionString);    
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
              
              decrypt(encryptedMessage, substitutionString);
              printf("\n");
              printf("\n");
              printf("End program.\n");
            
          break;
          
              default:
              printf("Invalid selection.  %d not recognised.\n", task);
              break;
        }
    }

 void enigmaFunction(char *regularText, int n, int encryptKey)
            {
                int i;
                
    
                     for( i=0; i <= (n-2) ; i++ )
                     {
                        if(97<=regularText[i] && regularText[i]<=122)
                         {
                             regularText[i] = regularText[i]-32;
                         }
                             if(65<=regularText[i] && regularText[i]<=90)
                             {                
                              regularText[i]= regularText[i]-65;
                              regularText[i]=(regularText[i]+encryptKey);
                              regularText[i]=regularText[i]%(26);
                              regularText[i]=regularText[i]+65;
                             }     
    
                    }

            }
    
void decryptionFunction(char *decryptedText, int o, int decryptKey)
    {
    int j;
    
    
        for( j=0; j <= (o-2) ; j++ )
        {
            if(97<=decryptedText[j] && decryptedText[j]<=122){
            decryptedText[j] = decryptedText[j]-32;
        }
            if(65<=decryptedText[j] && decryptedText[j]<=90)
            {                
                decryptedText[j]= decryptedText[j]-65;
                decryptedText[j]=decryptedText[j]-decryptKey+26;
                if(decryptedText[j]<0){decryptedText[j]=decryptedText[j]+26;}
                decryptedText[j]=decryptedText[j]%(26);
                
                decryptedText[j]=decryptedText[j]+65;
            }     
            
       
            }
          

    }
    
void substitutionEncryption(char *messageString, char *substitutionString)
    {
        int i, n;
        for(i=0; messageString[i]!= '\0' ; i++)
        {
            if(messageString[i]<= 90 && messageString[i]>=65)
            {            
             n = messageString[i]-65; 
             printf("%c", substitutionString[n]);
            }
                else
                {
                printf("%c", messageString[i]);
                }
    
    
        }
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