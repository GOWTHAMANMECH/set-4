#include<stdio.h>
#include<string.h>
void main()
{
	int sum=0,a;
	char g[50];
  printf("Enter the string:");
  gets(g);
	a=strlen(g);
	for(int i=0;i<=a;i++)
	{
		if((g[i]>='a'&&g[i]<='z')||(g[i]>='A'&&g[i]<='Z'))
		{
		    sum=sum+1;
		}
	}
	printf("The number of characters in the line is: %d\n",sum);
}
