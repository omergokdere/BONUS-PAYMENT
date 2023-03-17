#include <stdio.h>

int main(void)
{
	char first, last;
	int payment;
	double overtime;
	double absent;
	double bonusPayment;

	printf("This programs helps you to calculate the bonus payment of your employees\n\n");
	
	printf("\nWrite the employee's initials: ");
	scanf("%c%c", &first, &last);
	printf("\nWrite Overtime: ");
	scanf("%lf", &overtime);
	printf("\nWrite Absent: ");
	scanf("%lf", &absent);

	bonusPayment = overtime - 2 * absent / 3;

	if (bonusPayment > 40){
		printf("\n\n Your employee's bonus payment  is $50\n\n");
	}
	else if (bonusPayment > 30){
		printf("\n\n Your employee's bonus payment  is $40\n\n");
	}
	else if (bonusPayment > 20){
		printf("\n\n Your employee's bonus payment  is $30\n\n");
	}
	else if (bonusPayment > 10){
		printf("\n\n Your employee's bonus payment  is $20\n\n");
	}
	else {
		printf("\n\n Your employee's bonus payment  is $10\n\n");
	}
	 printf(" \n\n\n\n"
	      "	                                                    *****************\n"
          "			                                    * OMER GOKDERE  *\n"
          "	                                                    *****************\n");


	return 0;
}