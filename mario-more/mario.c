#include <stdio.h>
#include <math.h>
#include <ctype.h>                                          // for isdigit function

int main() {
    int height=0;
    char temp[10] = {0};
    char buildingBlocks[2] = {' ', '#'};
    do{
        printf("Enter Height: ");
        fgets(temp, 10, stdin);                             // read input as string
        if(isdigit(temp[0]) && temp[1] == '\n'){            // check if character is a digit
            sscanf(temp, "%d", &height);                    // convert string to integer
        }

        if(height > 0 && height<8){                         // printing the pyramid if height is positive
            for (int i = 0; i < height; i++) {
                for(int l=0; l<2; l++){
                    int n = l;
                    for (int j = 0; j < (height*n)+pow(-1,n)*(height - i - 1); j++) {
                        printf("%c", buildingBlocks[n]);
                    }
                    n=1-n;
                    for (int k = 0; k < (height*n)+pow(-1,n)*(height - i - 1); k++) {
                        printf("%c", buildingBlocks[n]);
                    }
                    printf("  ");
                }
                printf("\n");
            }
            break;
        }
        else{                                                // prompt for positive integer if input is invalid
            printf("Please enter a integer inclusively between 1 and 8 for height\n");
        }   
    }while(1);
    return 0;
}
