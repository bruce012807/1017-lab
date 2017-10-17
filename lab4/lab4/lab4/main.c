#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int grade;
	int acount = 0;
	int bcount = 0;
	int ccount = 0;
	int dcount = 0;
	int fcount = 0;

	printf("enter the letter grades.\n");
	printf("enter the EOF character to end input.\n");

	while ((grade = getchar()) != EOF)
	{
		switch (grade)
		{
			case 'A':
			case 'a':
				acount = acount + 1;
				break;
			case 'B':
			case 'b':
				bcount = bcount + 1;
				break;
			case 'C':
			case 'c':
				ccount = ccount + 1;
				break;
			case 'D':
			case 'd':
				dcount = dcount + 1;
				break;
			case 'F':
			case 'f':
				fcount = fcount + 1;
				break;
			case '\n':
			case '\t':
		    case ' ':
				break;
			default:
				printf("incorrect letter grade entered.");
				printf("enter a new grade.\n");
				break;

		}


	}
	printf("\ntotals for each letter grade are:\n");
	printf("A: %d\n", acount);
	printf("B: %d\n", bcount);
	printf("C: %d\n", ccount);
	printf("D: %d\n", dcount);
	printf("F: %d\n", fcount);

	system("pause");
	return 0;
}