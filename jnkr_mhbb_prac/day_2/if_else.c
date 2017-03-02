#include <stdio.h>
typedef int bool;
#define true 1;
#define false 0;


int main(){

    int rickshaw_rent = 40;
    int sallary = 15000;
    int age = 17;
    int dating_hour = 3;
    int ice_cream_price = 30;
    bool is_hot = true;
    int take_from_tanim = 100;
    int take_from_abir = 151;

    //Decide: Go with Rickshaw or walk
    if(rickshaw_rent < 30){
        //printf("%s", "Pick a rickshar");
    }else{
        //printf("%s", "Walking has selected");
    }

    //Decide: Marry now or later
    if(sallary > 50000){
        //printf("%s", "Get married");
    }else{
        //printf("%s", "Roja Rakho");
    }

    //Decide: can you vote
    if(age>=18){
        //printf("%s", "You can give your vote now");
    }else{
        //printf("%s", "You are not old enough to give your vote");
    }

    //Decide: go to dating or learn programming
    if(dating_hour <= 3){
        //printf("%s", "I will go to dating now");
    }else{
        //printf("%s", "Nope! i need to learn programming");
    }

    //Decide: Ice-cream or filter water
    if(ice_cream_price<50 && is_hot){
        //printf("%s", "Eat Ice-cream!");
    }else{
        //printf("%s", "Eat Filtered water!");
    }


    //Decide: Samucha or empty stomach
    if(take_from_tanim > 150 || take_from_abir> 150){
        //printf("%s", "Eat samucha!");
    }else{
        //printf("%s", "Go home with empty stomach!");
    }

}
