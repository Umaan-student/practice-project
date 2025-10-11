#include<stdio.h>
int main(){
	char name[20],gender[10];
	int age;
	printf("Welcome to the game of Knowing yourself");
	printf("\nPlease enter your Name:");
	scanf("%s", &name);
	printf("\nPlease enter your Age:");
	scanf("%d", &age);
	printf("\nPlease enter your Gender:");
	scanf("%d", &gender);
if(age>=18){
		printf("\n Your Name is %s", name);
		printf("\nyour Adult & elegible for license");
		printf(" & your are %d year old ", age);}
else{
		printf("your not elegible");
	};

		return 0;
}