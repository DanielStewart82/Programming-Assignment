#include <stdio.h>
#include <stdlib.h>

void enigmaFunction(char *regularText, int n);
void decryptionFunction(char *decryptedText, int o);

int main()
    {
    
    char regularText[]= "MON MOTHMA: THE DATA BROUGHT TO US BY THE BOTHAN SPIES PINPOINTS THE EXACT LOCATION OF THE EMPEROR'S NEW BATTLE STATION. WE ALSO KNOW THAT THE WEAPON SYSTEMS OF THIS DEATH STAR ARE NOT YET OPERATIONAL. WITH THE IMPERIAL FLEET SPREAD THROUGHOUT THE GALAXY IN A VAIN EFFORT TO ENGAGE US, IT ISRELATIVELY UNPROTECTED. BUT MOST IMPORTANT OF ALL, WE'VE LEARNED THAT THE EMPEROR HIMSELF IS PERSONALLY OVERSEEING THE FINAL STAGES OF THE CONSTRUCTION OF THIS DEATH STAR. MANY BOTHANS DIED TO BRING US THIS INFORMATION.";
    int n;
    n = (sizeof(regularText))/sizeof(regularText[0]);
    
    char decryptedText[]= "TVU TVAOTH: AOL KHAH IYVBNOA AV BZ IF AOL IVAOHU ZWPLZ WPUWVPUAZ AOL LEHJA SVJHAPVU VM AOL LTWLYVY'Z ULD IHAASL ZAHAPVU. DL HSZV RUVD AOHA AOL DLHWVU ZFZALTZ VM AOPZ KLHAO ZAHY HYL UVA FLA VWLYHAPVUHS. DPAO AOL PTWLYPHS MSLLA ZWYLHK AOYVBNOVBA AOL NHSHEF PU H CHPU LMMVYA AV LUNHNL BZ, PA PZ YLSHAPCLSF BUWYVALJALK. IBA TVZA PTWVYAHUA VM HSS, DL'CL SLHYULK AOHA AOL LTWLYVY OPTZLSM PZ WLYZVUHSSF VCLYZLLPUN AOL MPUHS ZAHNLZ VM AOL JVUZAYBJAPVU VM AOPZ KLHAO ZAHY. THUF IVAOHUZ KPLK AV IYPUN BZ AOPZ PUMVYTHAPVU.";
    int o;
    o = (sizeof(decryptedText))/sizeof(decryptedText[0]);
    

    enigmaFunction(regularText, n);
    printf("%s\n", regularText);
    
    decryptionFunction(decryptedText, o);
    printf("%s\n", decryptedText);
    return 0;
    }
 
void enigmaFunction(char *regularText, int n)
    {
    int i;
    int key = 7;
    
        for( i=0; i <= (n-2) ; i++ )
        {
            if(97<=regularText[i] && regularText[i]<=122)
            {
            regularText[i] = regularText[i]-32;
            }
            if(65<=regularText[i] && regularText[i]<=90)
            {                
                regularText[i]= regularText[i]-65;
                regularText[i]=(regularText[i]+key);
                regularText[i]=regularText[i]%(26);
                regularText[i]=regularText[i]+65;
            }     

        }

    }
    
void decryptionFunction(char *decryptedText, int o)
    {
    int j;
    int key = 7;
    
        for( j=0; j <= (o-2) ; j++ )
        {
            if(97<=decryptedText[j] && decryptedText[j]<=122){
            decryptedText[j] = decryptedText[j]-32;
        }
            if(65<=decryptedText[j] && decryptedText[j]<=90)
            {                
                decryptedText[j]= decryptedText[j]-65;
                decryptedText[j]=decryptedText[j]-key+26;
                if(decryptedText[j]<0){decryptedText[j]=decryptedText[j]+26;}
                decryptedText[j]=decryptedText[j]%(26);
                
                decryptedText[j]=decryptedText[j]+65;
            }     
            
       
            }
          

}