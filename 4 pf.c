#include<stdio.h>
int main()
{
	int username,password;
	printf("\n Enter username");
	scanf("%d", &username);
	if (username==1)
	{
		printf("\n Enter password:");
		scanf("%d",& password);
		if(password==1)
		{
			printf("\n You are logged in");
		}
	    else {
	    	printf("\n Incoreect password");
		}
	}
	else
	{
		printf("\n Username not found");
	}
	return 0;
}
