#include<stdio.h>
#include<conio.h>
void main()
{
	int marks;
	char grade;
	clrscr();
	printf("enter your marks out of 100 : ");
	scanf("%d", &marks);
	grade = (marks>100 || marks<0) ? 'i':
			(marks>=90) ? 'A':
			(marks>=80) ? 'B':
			(marks>=70) ? 'C':
			(marks>=60) ? 'D':
			(marks>=50) ? 'E': 'F';
	if(grade=='i')
	{
		printf("please enter valid marks");
	}
	else
	{
		printf("your grade is : %c .",grade);
	}
	switch(grade)
	{
		case 'A':
			printf("excellent work!");
			break;
		case 'B':
			printf("well done.");
			break;
		case 'C':
			printf("Good job.");
			break;
		case 'D':
			printf("you passed , but you could do better.");
			break;
		case 'E':
			printf("you have to work hard!!");
			break;
		case 'F':
			printf("Sorry , you are failed");
			break;
		default:
			printf("please enter valid input");
	}

	if(grade == 'A' || grade == 'B' || grade == 'C' || grade == 'D' ||  grade == 'E' )

	{
		printf(" congratulations! you are eligible for the next level");
	}
	else
	{
		printf(" Please try again next time");
	}


	getch();
}