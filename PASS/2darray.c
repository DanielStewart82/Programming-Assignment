#include<stdio.h>

int main(){
    
    int a[3][4]={{7,1,2,3},{4,5,6,7},{8,9,10,11}};
    int b[3];
    int i, j, min;
    for(i=0;i<3;i++){
        min = a[i][0];
        for(j=0;j<4;j++){
            
            printf("%d ", a[i][j]);  

            
            if(a[i][j]<min){
                min=a[i][j];
                
            }

           
            
        }
        //printf("%d\n", min);
        b[i]=min;
        printf("%d\n", b[i]);
    }
    
}