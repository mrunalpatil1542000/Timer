#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

int main()
{
	int hrs=0,min=0,sec=0,h=0,m=0,s=0;
	system("cls");
	//Setting Time
	printf("Set the \"Timer\" ");
	printf("\nHours=");
	scanf("%d",&hrs);
	printf("Minutes=");
	scanf("%d",&min);
	while(min>60)
	{
		printf("Please enter valid minutes...\n");
		printf("Minutes==");
		scanf("%d",&min);
	}
	printf("Seconds=");
	scanf("%d",&sec);
	while(sec>60)
	{
		printf("Please enter valid seconds...\n");
		printf("Seconds==");
		scanf("%d",&sec);
	}
	//timer logic
	for(h=hrs;h>=0;h--)
	{
		for(m=min;m>=0;m--)
		{
			for(s=sec;s>=0;s--)
			{
			 system("cls");
				printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t");
				printf("%d ::  %d ::  %d",h,m,s);
				Sleep(1000);
			}
			sec=59;
		}
		min=59;
	}
	system("cls");
	if(h==-1 && m==-1 && s==-1)
	{
		printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t");
		printf("Ohhhh! Time is over...");
    }
    return 0;
}
