#include<stdio.h>
int main ()
{  int a,b,c ;
char option;
scanf("%d%c%d=%d",&a,&option,&b,&c);
	if(option=='-')
	{
		if(c==a-b)
				  printf("Right");
		else
			printf ("Wrong");
	}
	else if (option=='+')
	{	
		if(c==a+b)
 				  printf("Right");
		else
			printf ("Wrong");
	}
	return 0;
	
}
 
