#include<stdio.h>
#include<string.h>
int main()
{
	int power;
	char color;
	printf("\n Is the power on? 1 for on 2 for off");
	scanf("%d",& power);
	
	switch(power)
	{
		case 1:
			printf("\n Enter light color:");
			scanf("%s",& color);
			if (color== 'R' || color=='r')
			{
				printf("\n Stop");
			}
		else if (color== 'Y' || color== 'y')
			{
				printf("\n Caution");
			}
			else if (color== 'G' || color=='g')
			{
				printf("\n Go!");
			}
			else
			{
				printf("\n Invalid choice");
			}
				break;
			case 2:
				printf("\n\n Signal off");
				break;
	}
	return 0;
}
