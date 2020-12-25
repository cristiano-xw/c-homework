#include<stdio.h>
#include<stdlib.h>
#include<time.h>
# define MAX_NUMBER 100
//void initialize_number_generator(void);
int new_secret_number(void);
void read_guesses(int secrect_number);
int  main(void) 
{
	char command;
	int secret_number;
	printf("guess the secret number between 1 and %d.\n",MAX_NUMBER);
	//initialize_number_generator();
	 int new_secret_number(void);
	do
	{
	  secret_number=new_secret_number();
	  printf("a new number has been chosen\n");
	  read_guesses(secret_number);
	  printf("play again? (y/n)");
	  scanf("%c",&command);
	  printf("\n");
	  
	}while (command=='y'||command=='Y');
	return 0;
	
}
//void initialize_number_generator(void)
//{
	//srand((unsigned)time (NULL));
//}
int new_secret_number(void)
{
	return rand()%MAX_NUMBER +1;
}
void read_guesses(int secret_number)
{
	int guess,num_guesses=0;
	for(;;)
	{
		num_guesses++;
		printf("enter guess:");
		scanf("%d",&guess);
		if (guess==secret_number){
			printf("you won in %d guesses!\n",num_guesses);
			return;
		}else 
		if (guess<secret_number)
		printf("too low ;try again.\n");
		else
		printf("to high; try again\n");
	}
}
