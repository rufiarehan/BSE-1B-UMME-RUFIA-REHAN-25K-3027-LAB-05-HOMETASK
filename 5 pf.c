#include<stdio.h>
int main()
{
	int prerequisite,coursefull;
	printf("\n Enter if you have prerequisite: 0 for no 1 for yes ");
	scanf("%d",& prerequisite);
	if (prerequisite == 0) 
	{
		printf("\n Course status: 0 for not full 1 for full");
		scanf("%d",& coursefull);
    if (coursefull == 1) 
	{
        printf("\n Cannot enroll: prerequisite missing and course is full");
    } 
	else
	 {
        printf("\n Cannot enroll: prerequisite missing");
    }
} 
else 
{
		printf("\n Course status: 0 for not full 1 for full");
		scanf("%d",& coursefull);
    if (coursefull == 1) 
	{
        printf("\n Cannot enroll: course is full");
    } 
	else 
	{
        printf("\n Enrolled successfully");
    }
}

	return 0;
}
