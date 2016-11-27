//collatz conjecture---calculate, how many steps it requires to go back to 1 from any number using collatz conjecture.
#include <stdio.h>
int collatz_called=-1;

collatz(int n){
    collatz_called++;
    if(n == 1){
        return;
    }

    if(n%2 == 0){
        collatz(n/2);
    }else{
        collatz(3*n+1);
    }


}

int main(){

        collatz(3);

        printf(" %d", collatz_called);


}
