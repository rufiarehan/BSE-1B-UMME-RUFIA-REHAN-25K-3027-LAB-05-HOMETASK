#include<stdio.h>
int main()
{
	int age;
	printf("\n What's your age?");
	scanf("%d",& age);
	
		if(age>=65)
	{
		printf("\n You get a discount");
}
	 else if(age>=18 && age<65)
	{
		printf("\n You pay standard price");
	}
      else	if(age<=5)
	{
		printf("\n Your price is free");
	}
 else 
 {
 	printf("\n In valid age");
 }
	return 0;
}
