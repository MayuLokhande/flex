/*#include <stdio.h>

// Function to convert decimal to binary
void decimalToBinary(int decimal) {
    int binary[32], index = 0;

    // Convert decimal to binary
    while (decimal > 0) {
        binary[index] = decimal % 2;
        decimal /= 2;
        index++;
    }

    // Display binary representation...
    printf("Binary: ");
    for (int i = index - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }
    printf("\n");

}
void decimalto_octal(int decimal){
    int octal[32];
    int index=0;
    while(decimal>0){
        octal[index] = decimal % 8;
        decimal /= 8;
        index++;
    }
    printf("Octal :");
    for(int i=index-1;i>=0;--i){
        printf("%d",octal[i]);
    }
    printf("\n");
}
void decimaltohexadecimal(int decimal){
    int hexadecimal[32];
    int index=0;
    while(decimal>0){
        int reminder=decimal % 16;
if(reminder<10){
    hexadecimal[index] = reminder +10;
}
else{
    hexadecimal[index] = reminder - 10 +'A';
}    decimal /= 16;
index++;
    }
    printf("hexadecimal :");
    for(int i=index-1;i>=0;i--){
        printf("%d",hexadecimal[index]);
    }printf("\n");
}
int main() {
    int decimal;

    // Accept decimal number from user
    printf("Enter a decimal number: ");

    scanf("%d", &decimal);

    // Call functions to convert and display representations
    decimalToBinary(decimal);
    decimalto_octal(decimal);
    decimaltohexadecimal(decimal);
    return 0;
}*/
#include<stdio.h>
void decimaltobinary(int decimal){
    int index=0;
    int binary[32];
    while(decimal>0){
binary[index] = decimal % 2;
decimal /= 2;
index++;
    }
    printf("binary :");
    for(int i=index-1; i>=0; --i){
        printf("%d",binary[i]);
    }printf("\n");}

    void decimaltooctal(int decimal){
        int index=0;
        int octal[32];
        while(decimal>0){
            octal[index] = decimal % 8;
            decimal /= 8;
            index++;
        }
        printf("octal :");
        for(int i=index-1; i>=0; i--){
            printf("%d",octal[i]);
        }
        printf("\n");
    }
    void hexadecimal(int decimal){
        int index=0;
        int hexadecimal[32];
        while(decimal > 0){
            int remainder = decimal % 16;
            while(remainder < 10){
                hexadecimal[index] = remainder - '0';
            }
            hexadecimal[index] = remainder - 10 + 'A';
        }
        decimal / 16;
        index++;
        printf("hexadecimal ");
        for(int i=index-1; i>=0; i--){
            printf("%d",hexadecimal[i]);
        }
        printf("\n");
    }

int main(){
    int decimal;
    printf("enter the decimal");
    scanf("%d",&decimal);

    decimaltobinary(decimal);

 decimaltooctal(decimal);

 decimaltohexadecimal(decimal);
    return 0;
}