#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
int random, guess;
int no_of_guess = 0;
char name[20];
srand(time(NULL));
printf("\n====================================\n");
printf("Welcome to the world of guessing Game Number\n");
printf("=====================================\n");
printf("\n Please Enter Your NAME:  ");
scanf("%s", &name);
random = rand() %100 +1;

do{
printf("\nPlease enter your Guess between 1 to 100:  ");
scanf("%d", &guess);
no_of_guess++;
if(guess<random){
printf("\n\tguess a Large Number\n");
}
else if(guess>random){
printf("\n\tpls enter a small Number\n");
}else{ 
printf("\nCongratulation!! %s you win\n", name); 
printf("\n you guess the number in %d attempts:\n", no_of_guess);
}
}while (guess != random);
printf("\n byby thank for playing\n");
printf("\n Developed by Amaan Dev\n");
return 0;
}
