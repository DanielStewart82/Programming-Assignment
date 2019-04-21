#include <stdio.h>
#include <stdlib.h>

void enigmaFunction(char *regularText, int n, int encryptKey);
void decryptionFunction(char *decryptedText, int o);

int main()
    {
        int encryptKey;
        int decryptKey;
        int task;
        printf("*****************************************************************************************************************\n");
        printf("Welcome to the ENGG1003 Programming Assignment. 1\n");
        printf("This program was written by Daniel Stewart.  Student Number: c3298707\n");
        printf("This program will decrypt or encrypt a message using either a rotation cipher or a substitution cipher.\n");
        printf("All inputs will need to be hardcoded prior to running this program.\n");
        printf("Task selection:\n");
        printf("Task 1: Encryption with rotation cipher\n");
        printf("Task 2: Decryption with rotation cipher\n");
        printf("Task 3: Encryption with substitution cipher\n");
        printf("Task 4: Decryption with substitution cipher\n");
        printf("Please make your selection now by entering the task number you wish to select then press enter.\n");
        scanf("%d", &task);
       
        
        
        
    char regularText[]= "MON MOTHMA: THE DATA BROUGHT TO US BY THE BOTHAN SPIES PINPOINTS THE EXACT LOCATION OF THE EMPEROR'S NEW BATTLE STATION. WE ALSO KNOW THAT THE WEAPON SYSTEMS OF THIS DEATH STAR ARE NOT YET OPERATIONAL. WITH THE IMPERIAL FLEET SPREAD THROUGHOUT THE GALAXY IN A VAIN EFFORT TO ENGAGE US, IT ISRELATIVELY UNPROTECTED. BUT MOST IMPORTANT OF ALL, WE'VE LEARNED THAT THE EMPEROR HIMSELF IS PERSONALLY OVERSEEING THE FINAL STAGES OF THE CONSTRUCTION OF THIS DEATH STAR. MANY BOTHANS DIED TO BRING US THIS INFORMATION.";
    int n;
    n = (sizeof(regularText))/sizeof(regularText[0]);
    
   char decryptedText[]= "TVU TVAOTH: AOL KHAH IYVBNOA AV BZ IF AOL IVAOHU ZWPLZ WPUWVPUAZ AOL LEHJA SVJHAPVU VM AOL LTWLYVY'Z ULD IHAASL ZAHAPVU. DL HSZV RUVD AOHA AOL DLHWVU ZFZALTZ VM AOPZ KLHAO ZAHY HYL UVA FLA VWLYHAPVUHS. DPAO AOL PTWLYPHS MSLLA ZWYLHK AOYVBNOVBA AOL NHSHEF PU H CHPU LMMVYA AV LUNHNL BZ, PA PZ YLSHAPCLSF BUWYVALJALK. IBA TVZA PTWVYAHUA VM HSS, DL'CL SLHYULK AOHA AOL LTWLYVY OPTZLSM PZ WLYZVUHSSF VCLYZLLPUN AOL MPUHS ZAHNLZ VM AOL JVUZAYBJAPVU VM AOPZ KLHAO ZAHY. THUF IVAOHUZ KPLK AV IYPUN BZ AOPZ PUMVYTHAPVU.";
    int o;
    o = (sizeof(decryptedText))/sizeof(decryptedText[0]);
    

   
   
    
    
    
 switch(task)
        {
          case 1:
          
              printf("Your hardcoded message you wish to encrypt with the rotation cipher is:\n");
              printf("%s\n", regularText);
              printf("Enter an integer between 0 and 25 that you wish to rotate the alphabet by:\n");
              scanf("%d", &encryptKey);
              printf("You have chosen to rotate the alphabet by a value of:%d\n", encryptKey);
              printf("Your encrypted message is:\n");
          
              enigmaFunction(regularText, n, encryptKey);
                 
                 
              printf("%s\n", regularText);
              printf("End program.\n");
            
          break;
          
            case 2:
            
              printf("Your hardcoded message you wish to decrypt with the rotation cipher is:\n");
              printf("%s\n", regularText);
              printf("Enter an integer between 0 and 25 that you wish to rotate the alphabet by:\n");
              scanf("%d", &decryptKey);
              printf("You have chosen to rotate the alphabet by a value of:%d\n", decryptKey);
              printf("Your decrypted message is:\n");
          
              decryptionFunction(decryptedText, o);
              printf("%s\n", decryptedText);
                 
                 
              printf("%s\n", regularText);
              printf("End program.\n");
            
          break;
            
        }
    }

 void enigmaFunction(char *regularText, int n, int encryptKey)
            {
                int i;
                //int encryptKey;
    
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
    
void decryptionFunction(char *decryptedText, int o)
    {
    int j;
    int decryptKey;
    
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