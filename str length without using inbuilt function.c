#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char x[100];
	int i=0;
	printf("Enter the string :-");
	gets(x); // enter : hello friends 
	while(x[i]!='\0')
	{
		i++;
	}
	printf("%d",i);
	
	return 0;
}
