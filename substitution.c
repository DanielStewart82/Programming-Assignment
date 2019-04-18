#include <stdio.h>

void ekey(char subString[], char encryptedString[], int n);

int main(){
    

    char subString[] = "QWERTYUIOPASDFGHJKLZXCVBNM";
    int n;
    n = sizeof(subString)/(sizeof(subString[0]));
    char encryptedString[1000];
    ekey(subString, encryptedString, n);
    printf("%s\n", encryptedString);

   //printf("%c\n", subString[22]);
   
    return 0;
}
void ekey(char subString[], char encryptedString[], int n){
    int i;
    for(i=0; i <= n-2; i++){
        subString[i]=subString[i]-65;
        encryptedString[i]=subString[i];
        
    }
}