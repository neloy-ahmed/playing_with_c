#include <stdio.h>

int is_digit( char input );
int main(void){
    char input;
    printf("Please Input a character: ");
    input = getchar();
    int output = is_digit(input);
    if(output){
            printf("You inputed a digit\n");
    }else{
            printf("A Non-digit character was Inputted\n");
    }
}

int is_digit( char input ){

    if(input >47 && input<58){
        return 1;
    }

    return 0;
}

