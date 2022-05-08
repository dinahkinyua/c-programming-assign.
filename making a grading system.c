/* grading system
1.asking the user to enter marks for three subjects
2. calculate the averrage score
3. calculate the grade
*/
#include <stdio.h>
int main()
{
	int phy,chem,bio,average;
	printf("enter marks for the phyc,bio and chem/n");
	scanf("%d,%d,%d",&phy,&chem,&bio);
    average=(phy+bio+chem)/3;
    printf("average:%d",average);
	if(average>=70&& average<=100)
	{
		printf("grade A");
	}
	else if(average>=60 && average<=69)
		printf("grade B");
	else if ( average>=50&& average<=59)
		printf("grade C");
	else if( average>=40&& average<=49)
		printf("grade D");
	else if (average>=0&&average<=39)
		printf("fail");
	
	return 0;
}


