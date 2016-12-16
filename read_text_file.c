#include <stdio.h>
int main(){
    FILE* ptr = fopen("Internet_Serfing.txt", "r");
    char ch;
    while ((ch = fgetc(ptr)) != EOF){
        printf("%c", ch);
    }
}

