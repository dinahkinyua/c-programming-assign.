#include <stdio.h>
int main()
{
	int num;
	printf("enter a positive natural number");
	scanf("%d" , &num);
	while(num)
	{
	 printf("%d",num);
	 num--;
	 printf("/n");	
	}
	
	return 0;
}