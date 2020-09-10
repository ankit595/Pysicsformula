#include<stdio.h>
#include"Functions.h"
int main()
{	
	int choose;
	printf("________________________________________________________________________________________________________________________\n\t\t\t\tStart\n________________________________________________________________________________________________________________________");
	printf("\n\t\t1.Force\n\t\t2.Work\n\t\t3.Power\n\t\t4.Impulse\n\t\t5.Momentum\n\t\t: ");
	scanf("%d",&choose);
	switch(choose)
	{
		case 1:
			force();
			break;
		case 2:
			work();
			break;
		case 3:
			power();
			break;
		case 4:
			impulse();
			break;
		case 5:
			momentum();
			break;
		default :
			printf("Choose correct option");	
	}
	printf("\n________________________________________________________________________________________________________________________\n\t\tThank You!!\n________________________________________________________________________________________________________________________\n\n");
	return 0;
}
