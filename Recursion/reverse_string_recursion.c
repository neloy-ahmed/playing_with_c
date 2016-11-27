/*REVERSE A STRING USING RECURSION*/
/*IT TOOK NELOY AHMED AT LEAST 1 WEEK TO COMPLETE THIS
BUT AFTER COMPLETING IT.... AHHHHHHHHHH IT FEELS GREAT
Done in 23_Nov_2016
*/
#include <stdio.h>
#include <string.h>
#define STRING_SIZE 50

char *string_reverse(char str[]);
char reverese[STRING_SIZE];
int reverser_called = 0;
int main()
{
    char str[STRING_SIZE];
    printf("Enter string: ");
    gets(str);

    printf("%s\n", string_reverse(str));
    printf("%d", reverser_called);
    return 0;
}
char *string_reverse(char str[]){
    static int i;
    static int j = 0;
    if(reverser_called == 0){
        int len = strlen(str);

        char reverese[len];
        i = len-1;
    }

    reverser_called++;

    //When it reaches the very first item of the string array
    if(i < 0){
        reverese[j] = '\0';
        return reverese;
    }


     reverese[j] = str[i];

     j++;
     i--;

     string_reverse(str);

}

