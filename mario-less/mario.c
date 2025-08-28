#include <stdio.h>
#include <ctype.h>                                          // for isdigit function

int main() {
    int height=0;
    char temp[10] = {0};
    do{
        printf("Enter Height: ");
        fgets(temp, 10, stdin);                             // read input as string
        if(isdigit(temp[0])){                               // check if character is a digit
            sscanf(temp, "%d", &height);                    // convert string to integer
        }

        if(height > 0){                                     // printing the pyramid if height is positive
            for (int i = 0; i < height; i++) {
                for (int j = 0; j < height - i - 1; j++) {
                    printf(" ");
                }
                for (int k = 0; k < i + 1; k++) {
                    printf("#");
                }
                printf("\n");
            }
            break;
        }
        else{                                                // prompt for positive integer if input is invalid
            printf("Please enter a positive integer for height\n");
        }   
    }while(1);
    return 0;
}
