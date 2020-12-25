#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define MAX_NUMBER 100
void initialize_number_generator(void);
void choose_new_secret_number(void);
void read_guess(void);
int main(void)
{
	char command;
	printf("guess the secret number between 1 and %d.\n",MAX_NUMBER);
	initialize_number_generator();
	do
	{
		choose_new_secret_number();
		printf("a new number has been chosen.\n");
		read_guess();
		printf("play again?(y/n)");
		scanf("%c",&command);
		printf("\n");
	}while (command == 'y' || command == 'Y');
	
}
void initialize_number_generator(void)
{
	srand((unsigned) time (NULL));
	
}
void choose_new_secret_number(void)
{ int secret_number;
	secret_number = rand() % MAX_NUMBER+1;
}
void read_guess(void)
{
	int guess , num_guesses = 0,secrect_number;
	for(;;){
		
		num_guesses++;
		printf("enter guess:");
		scanf("%d",&guess);
		if (guess == secrect_number){
			printf("you won in %d gusses!\n",num_guesses);
			return ;
		}else if (guess < secrect_number )
		printf (" to low ; try again.\n");
		else 
		printf("too hiah; try again.\n");
	}
}
