#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include "lib.h"

int main()                //main function//
{
	char str[100];             //variable declaration//
    int c;
    int i;
    do
    {
    	printf("Enter 1 for checking Type of Data \n\n Enter 2 for checking Length  \n\n Enter 3 for Date Check \n\nEnter 4 for Exit\n\n");
    scanf("%d",&c);
	switch(c)                    //switch case//
    {
    	
    case 1:                //switch case for Data check//
    	printf("Enter 1 for checking INTEGER Type of Data \n\n Enter 2 for checking CHARACTER Type of Data\n\n");
        scanf("%d",&i);
	    switch(i)                   //switch case//
	    {
	    case 1:                       //switch case for Number Check//
		    typeofdatanum();
			break;	
		case 2:                   //switch case for alphabate check//
		    typeofdatachar();
			break;	
		}	
		break; 
			
	case 2:                  //switch case for length check//
	    lengthcheck();
		break;	
		
    case 3:              //switch case for Date check//
	    datecheck();
		break;	
	}
	}while(c!=4);
	return 0;
}
