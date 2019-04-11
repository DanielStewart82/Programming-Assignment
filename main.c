#include <stdio.h>
#include <stdlib.h>

void enigmaFunction(char *regularText, int n);
void decryptionFunction(char *decryptedText, int o);

int main()
    {
    
    char regularText[]= "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int n;
    n = (sizeof(regularText))/sizeof(regularText[0]);
    
    char decryptedText[]= "TVU TVAOTH: AOL KHAH IYVBNOA AV BZ IF AOL IVAOHU ZWPLZ WPUWVPUAZ AOL LEHJA SVJHAPVU VM AOL LTWLYVY'Z ULD IHAASL ZAHAPVU. DL HSZV RUVD AOHA AOL DLHWVU ZFZALTZ VM AOPZ KLHAO ZAHY HYL UVA FLA VWLYHAPVUHS. DPAO AOL PTWLYPHS MSLLA ZWYLHK AOYVBNOVBA AOL NHSHEF PU H CHPU LMMVYA AV LUNHNL BZ, PA PZ YLSHAPCLSF BUWYVALJALK. IBA TVZA PTWVYAHUA VM HSS, DL'CL SLHYULK AOHA AOL LTWLYVY OPTZLSM PZ WLYZVUHSSF VCLYZLLPUN AOL MPUHS ZAHNLZ VM AOL JVUZAYBJAPVU VM AOPZ KLHAO ZAHY. THUF IVAOHUZ KPLK AV IYPUN BZ AOPZ PUMVYTHAPVU.";
    int o;
    o = (sizeof(decryptedText))/sizeof(decryptedText[0]);
    

    enigmaFunction(regularText, n);
    printf("%s\n", regularText);
    decryptionFunction(decryptedText, n);
    printf("%s\n", decryptedText);
    return 0;
    }
 
void enigmaFunction(char *regularText, int n)
    {
    int i;
    int key = 0;
    
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
    int i;
    int key = 2;
    
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