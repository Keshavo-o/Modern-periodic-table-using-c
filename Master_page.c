#include<stdio.h>
#include<string.h>
#include"search_by_periodic_number.c"
main()
{
	int istrue=0;
	int periodic_number;
	char symbol[10];
	char name[15];
	printf("Welcome to the Periodic Table\nHow do you want to explore it\n");
	while (istrue==0)
	{
	    printf("\n\nEnter 1 to search by Periodic Number\nEnter 2 to search by Symbol\n");
	    printf("Enter 3 to search by Name\nEnter 4 to exit\n");
	    printf("\nENTER:\n");
	    int x;
		scanf("%d",&x);
		if(x==1)
	{
		printf("Enter the periodic number of element\n");
		scanf("%d",&periodic_number);
		Periodic_number(periodic_number);
	}
	    if(x==2)
	{
		printf("Enter the symbol of element\n");
		scanf("%s",&symbol);
	}
	    if(x==3)
	{
		printf("Enter the Name of element\n");
		scanf("%s",&name);
	}
	    if(x==4)
	{
		printf("Exited from the program\n");
		istrue=1;
		break;
	}
    }
}
