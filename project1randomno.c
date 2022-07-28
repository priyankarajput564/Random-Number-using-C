#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int number,guess,nattempt=1;
    srand(time(0));
    number=rand()%100 + 1;//Generates random number between 1 and 100
    do{
        printf("\nGuess the number between between 1 to 100:");
        scanf("%d",&guess);
        if(guess>number){
            printf("\nGuess lower number");
        }
        else if(guess<number){
            printf("\nGuess higher number");
        }
        else{
            printf("\nYou guess the right number in %d attempts",nattempt);
        }
        nattempt++;
    }while(guess!=number);
    
    return 0;
}