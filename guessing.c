#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	//Random number generator
	srand(time(NULL));

	//number 
	int number = (rand() % 10) + 1;
	int user_number = 0;


	//get user name
	string name = get_string ("What's your Name: ");

	//counter and number check
	for (int i = 1; i < 4; i ++)
	{

		printf("Try %i out of 3\n", i);
		user_number = get_int("Choose a number from 1-10: ");

		//if correct answer
		if (user_number == number)
			{
				printf("Congratulations %s, the number is %d!\n", name, number);
				break;
			}
		//Wrong number on last try
		else if (i == 3)
			{
				printf("Game Over, the number was %d!\n", number);
				break;
			}
		//the number is to great
                else if (user_number > 10)
                         {
                                printf("Invalid input, please choose a number between 1-10!\n");
                       		i--;
				continue;
			 }
                //the number is to small
                else if (user_number < 1)
                        {
                                printf("Invalid input, please choose a number between 1-10!\n");
                        	i--;
				continue;
			}
		//Hint if number is to small
		else if (user_number < number)
			{
				printf("Your number is less than the target number, please try again!\n");
			}
		//Hint if number is to big
		else if (user_number > number)
			{
				printf("Your number is bigger than the target number, please try again!\n");
			}

	}

}
