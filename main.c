#include <stdio.h>

/**
  * main - Collates and prints student's Test Report
  * Return: Always 0
  */

int main(void)
{
	char subjects[5][30] = {"English", "Maths", "Physics", "Further Maths", "Chemistry"};
	char std_fname[30];
	char std_lname[30];
	float scores[5];
	int i, j;
	float total = 0;
	float average;

	printf("STUDENT TEST RECORD\n\n");
	printf("Enter Student's Full Name(first Name before last name): ");
	scanf("%s %s", std_fname, std_lname);
	printf("\n");

	for (i = 0; i < 5; i++)
	{
		enter_score:
		printf("Enter %s's score in %s: \n", std_fname, subjects[i]);
		scanf("%f", &scores[i]);
		if (*(scores + i) > 100)
		{
			printf("Invalid Score\n");
			goto enter_score;
		}
	
	}

	for (j = 0; j < 5; j++)
	{
		total += scores[j];
	}
	average = total / 5;

	printf("%s %s's amassed %.2f in total\n\n", std_fname, std_lname, total);
	printf("Speaking of average, %s %s scored %.2f\n\n",std_fname, std_lname, average);

	if (average < 40)
		printf("In addition, %s needs to improve!\n\n", std_fname);

	else if (average > 40 && average < 60)
		printf("In addition, %s is an average student!\n\n", std_fname);

	else if (average > 60 && average < 85)
		 printf("In addition, %s is a very good student!\n\n", std_fname);

	else
		printf("In addition, %s is an exceptional student!\n\n", std_fname);

	return (0);
}
