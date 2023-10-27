// Grading according to percentage

#include<stdio.h>
int main()
{
	float mm, mo, perc;
	
	printf("Enter the following :\n");
	printf("Maximum Marks = ");
	scanf("%f", &mm);
	printf("Marks Obtained = ");
	scanf("%f", &mo);
	
	perc = (mo/mm)*100;
	
	printf("\nPercentage = %f\n", perc);
	printf("\nResult : ");
	
	if(perc>=90)
	printf("Passed with grade A");
	if(perc>=80 && perc<90)
	printf("Passed with grade B");
	if(perc>=70 && perc<80)
	printf("Passed with grade C");
	if(perc>=60 && perc<70)
	printf("Passed with grade D");
	if(perc>=33 && perc<60)
	printf("Passed with grade E");
	if(perc<33)
	printf("Failed");
}