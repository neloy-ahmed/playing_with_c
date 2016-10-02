#include <stdio.h>
/*This code is collected from here https://www.tutorialspoint.com/cprogramming/c_pointers.htm*/
int main () {

   int  var = 20;   /* actual variable declaration */
   int  *ip;        /* pointer variable declaration */

   ip = &var;  /* store address of var in pointer variable*/

   printf("Address of var variable: %x\n", &var  );

   /* address stored in pointer variable */
   printf("Address stored in ip variable: %x\n", ip );//when you write it without * then it is the memory address Nel think

   /* access the value using the pointer */
   printf("Value of *ip variable: %d\n", *ip );//when you write it with * then it is the value stored in memory address Nel think

   return 0;
}
