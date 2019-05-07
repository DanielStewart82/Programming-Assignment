#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main() {
float image[5][5][3];
int x, y;
// Don’t change this srand() line!
srand(0);
    for(y = 0; y < 5; y++) {
        for(x = 0; x < 5; x++) {
image[x][y][0] = (float)rand()/(float)INT_MAX;
image[x][y][1] = (float)rand()/(float)INT_MAX;
image[x][y][2] = (float)rand()/(float)INT_MAX;
}
}
// ----------------------------------------
// Write your code below this comment block
// ----------------------------------------
float r=0, g=0, b=0, mean=0;
    for(y = 0; y < 2; y++) {
        for(x = 0; x < 5; x++) {
            r = image[x][y][0];
            g = image[x][y][1];
            b = image[x][y][2];
            mean=((r+b+g)/3);
            r = mean;
            g = mean;
            b = mean;
            printf("%d %d : %f %f %f\n", x, y, r, g, b);
            }     
            
         
    }
       

return 0;
}