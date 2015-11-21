#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int typeofdatanum();
int typeofdatachar();                      //function declaration//
int lengthcheck();
int datecheck();

int typeofdatanum()                         //Num Type of Data function//
{
	char str1[100];
	fflush(stdin);
	printf("Enter the string \n\n");             
	gets(str1);                            //string Input//
	int i,j,counter=0;
	j=strlen(str1);
	for(i=0;i<j;i++)
	{
		if(str1[i] >= '0' && str1[i] <= '9')                   //condition check//
		{
			counter++;
		}
	}
	if(counter==j)                                            //if else condition//
		{                                                             
			printf("Input is Correct\n");
		}
	else
		{
			printf("Input is Incorrect\n");
			typeofdatanum();
		}
		return 0;
}

int typeofdatachar()                                 //char Type of Data function//
{
	char str1[100];
	fflush(stdin);
	printf("Enter the Data[dd/mm/yyyy]: \n\n");
	gets(str1);                                     //string input//
	int i,j,k=0;
	j=strlen(str1);
	for(i=0;i<j;i++)
	{
		if((str1[i]>='a'&& str1[i]<='z') || (str1[i]>='A' && str1[i]<='Z'))           //condition check//
		{
            k++;			
		}
	}
		if(k==j)                      //if else condition//
		{
			printf("Input is Correct\n");
		}
		 else
	    {
	    	printf("Input is incorrect\n");
	    	typeofdatachar();
	    } 
	    return 0;
}



int lengthcheck()                      //length check function//
{
	char str1[100];
	fflush(stdin);
	printf("Enter your Phone Number \n\n");
	gets(str1);                                 //string input//
	int i,j,counter=0;
	j=strlen(str1);
	if(j==10)
	{
		for(i=0;i<j;i++)
	{
		if(str1[i] >= '0' && str1[i] <= '9')                //condition check//
		{
			counter++;
		}
		
	}

	if(counter==j)                             //if else condition//
		{
			printf("Phone Number is Correct\n");
		}
	else
		{
			printf("Phone Number is Incorrect\n");
			lengthcheck();
		}
	}
	else
	{
		printf("Phone Number is Incorrect\n");
	    lengthcheck();
	}
		return 0;
}

int datecheck()               //Date Check function//
{	
    char str1[100];
	fflush(stdin);
	printf("Enter the date: \n\n");
	scanf("%s",&str1);                         //string input//
	int i=0,j=0;
	j=strlen(str1);
	
	if(j==10)                              //if else condition for Date and format check//
	{
		if(str1[0]=='0')
		{
			if(str1[1] >= '1' && str1[1] <= '9')
			{
				if(str1[2]=='/')
				{
					if(str1[3]=='0')
					{
						if(str1[4] >= '0' && str1[5] <= '9')
						{
							if(str1[6]=='/')
							{
								if(str1[7] >= '1' && str1[7] <= '2')
								{
									if(str1[8] >= '0' && str1[8] <= '9')
									{
										if(str1[9] >= '0' && str1[9] <= '9')
										{
											if(str1[10] >= '0' && str1[10] <= '9')
											{
												printf("Date is correct\n");
											}
											else
											{
												printf("Date is Incorrect1\n");
												datecheck();
											}
										}
										else
											{
												printf("Date is Incorrect2\n");
												datecheck();
											}
									}
									else
											{
												printf("Date is Incorrect3\n");
												datecheck();
											}
								}
								else
											{
												printf("Date is Incorrect4\n");
												datecheck();
											}
							}
							else
											{
												printf("Date is Incorrect5\n");
												datecheck();
											}
						}
						else
											{
												printf("Date is Incorrect6\n");
												datecheck();
											}
				    }
				    
					else if(str1[3]=='1')
					{
						if(str1[4]=='0'||'1'||'2')
						{
							if(str1[5]=='/')
							{
								if(str1[6]=='1'||'2')
								{
									if(str1[7] >= '0' && str1[7] <= '9')
									{
										if(str1[8] >= '0' && str1[8] <= '9')
										{
											if(str1[9] >= '0' && str1[9] <= '9')
											{
												printf("Date is correct\n");
											}
											else
											{
												printf("Date is Incorrect8\n");
												datecheck();
											}
										}
										else
											{
												printf("Date is Incorrect9\n");
												datecheck();
											}
									}
									else
											{
												printf("Date is Incorrect\n");
												datecheck();
											}
								}
								else
											{
												printf("Date is Incorrect\n");
												datecheck();
											}
							}
							else
											{
												printf("Date is Incorrect\n");
												datecheck();
											}
						}
						else
											{
												printf("Date is Incorrect\n");
												datecheck();
											}
					}
					else
											{
												printf("Date is Incorrect\n");
												datecheck();
											}
					
				}
				else
											{
												printf("Date is Incorrect\n");
												datecheck();
											}
			}
			else
											{
												printf("Date is Incorrect\n");
												datecheck();
											}
		}
		
	    else if(str1[0]=='1')
		{
			if(str1[1] >= '0' && str1[1] <= '9')
			{
				if(str1[2]=='/')
				{
					if(str1[3]=='0')
					{
						if(str1[4] >= '0' && str1[4] <= '9')
						{
							if(str1[5]=='/')
							{
								if(str1[6]=='1'||'2')
								{
									if(str1[7] >= '0' && str1[7] <= '9')
									{
										if(str1[8] >= '0' && str1[8] <= '9')
										{
											if(str1[9] >= '0' && str1[9] <= '9')
											{
												printf("Date is correct\n");
											}
											else
											{
												printf("Date is Incorrect\n");
												datecheck();
											}
										}
										else
											{
												printf("Date is Incorrect\n");
												datecheck();
											}
									}
									else
											{
												printf("Date is Incorrect\n");
												datecheck();
											}
								}
								else
											{
												printf("Date is Incorrect\n");
												datecheck();
											}
							}
							else
											{
												printf("Date is Incorrect\n");
												datecheck();
											}
							}
							else
											{
												printf("Date is Incorrect\n");
												datecheck();
											}
				    }
				    
					else if(str1[3]=='1')
					{
						if(str1[4]=='0'||'1'||'2')
						{
							if(str1[5]=='/')
							{
								if(str1[6]=='1'||'2')
								{
									if(str1[7] >= '0' && str1[7] <= '9')
									{
										if(str1[8] >= '0' && str1[8] <= '9')
										{
											if(str1[9] >= '0' && str1[9] <= '9')
											{
												printf("Date is correct\n");
											}
											else
											{
												printf("Date is Incorrect\n");
												datecheck();
											}
										}
										else
											{
												printf("Date is Incorrect\n");
												datecheck();
											}
									}
									else
											{
												printf("Date is Incorrect\n");
												datecheck();
											}
								}
								else
											{
												printf("Date is Incorrect\n");
												datecheck();
											}
							}
							else
											{
												printf("Date is Incorrect\n");
												datecheck();
											}
						}
						else
											{
												printf("Date is Incorrect\n");
												datecheck();
											}
					}
					else
											{
												printf("Date is Incorrect\n");
												datecheck();
											}
				}
				else
											{
												printf("Date is Incorrect\n");
												datecheck();
											}
			}
			else
											{
												printf("Date is Incorrect\n");
												datecheck();
											}
		}
		
	    else if(str1[0]=='2')
		{
			if(str1[1] >= '0' && str1[1] <= '9')
			{
				if(str1[2]=='/')
				{
					if(str1[3]=='0')
					{
						if(str1[4] >= '0' && str1[4] <= '9')
						{
							if(str1[5]=='/')
							{
								if(str1[6]=='1'||'2')
								{
									if(str1[7] >= '0' && str1[7] <= '9')
									{
										if(str1[8] >= '0' && str1[8] <= '9')
										{
											if(str1[9] >= '0' && str1[9] <= '9')
											{
												printf("Date is correct\n");
											}
											else
											{
												printf("Date is Incorrect\n");
												datecheck();
											}
										}
										else
											{
												printf("Date is Incorrect\n");
												datecheck();
											}
									}
									else
											{
												printf("Date is Incorrect\n");
												datecheck();
											}
								}
								else
											{
												printf("Date is Incorrect\n");
												datecheck();
											}
							}
							else
											{
												printf("Date is Incorrect\n");
												datecheck();
											}
						}
						else
											{
												printf("Date is Incorrect\n");
												datecheck();
											}
					}
					
					else if(str1[3]=='1')
					{
						if(str1[4]=='0'||'1'||'2')
						{
							if(str1[5]=='/')
							{
								if(str1[6]=='1'||'2')
								{
									if(str1[7] >= '0' && str1[7] <= '9')
									{
										if(str1[8] >= '0' && str1[8] <= '9')
										{
											if(str1[9] >= '0' && str1[9] <= '9')
											{
												printf("Date is correct\n");
											}
											else
											{
												printf("Date is Incorrect\n");
												datecheck();
											}
										}
										else
											{
												printf("Date is Incorrect\n");
												datecheck();
											}
									}
									else
											{
												printf("Date is Incorrect\n");
												datecheck();
											}
								}
								else
											{
												printf("Date is Incorrect\n");
												datecheck();
											}
							}
							else
											{
												printf("Date is Incorrect\n");
												datecheck();
											}
						}
						else
											{
												printf("Date is Incorrect\n");
												datecheck();
											}
					}
					else
											{
												printf("Date is Incorrect\n");
												datecheck();
											}
				}
				else
											{
												printf("Date is Incorrect\n");
												datecheck();
											}
			}
			else
											{
												printf("Date is Incorrect\n");
												datecheck();
											}
		}
		
	    else if(str1[0]=='3')
		{
			if(str1[1]=='0'||'1')
			{
				if(str1[2]=='/')
				{
					if(str1[3]=='0')
					{
						if(str1[4] >= '0' && str1[4] <= '9')
						{
							if(str1[5]=='/')
							{
								if(str1[6]=='1'||'2')
								{
									if(str1[7] >= '0' && str1[7] <= '9')
									{
										if(str1[8] >= '0' && str1[8] <= '9')
										{
											if(str1[9] >= '0' && str1[9] <= '9')
											{
												printf("Date is correct\n");
											}
											else
											{
												printf("Date is Incorrect\n");
												datecheck();
											}
										}
										else
											{
												printf("Date is Incorrect\n");
												datecheck();
											}
									}
									else
											{
												printf("Date is Incorrect\n");
												datecheck();
											}
								}
								else
											{
												printf("Date is Incorrect\n");
												datecheck();
											}
							}
							else
											{
												printf("Date is Incorrect\n");
												datecheck();
											}
						}
						else
											{
												printf("Date is Incorrect\n");
												datecheck();
											}
					}
					
					else if(str1[3]=='1')
					{
						if(str1[4]=='0'||'1'||'2')
						{
							if(str1[5]=='/')
							{
								if(str1[6]=='1'||'2')
								{
									if(str1[7] >= '0' && str1[7] <= '9')
									{
										if(str1[8] >= '0' && str1[8] <= '9')
										{
											if(str1[9] >= '0' && str1[9] <= '9')
											{
												printf("Date is correct\n");
											}
											else
											{
											printf("Date is Incorrect\n");
											datecheck();
											}
										}
										else
											{
												printf("Date is Incorrect\n");
												datecheck();
											}
									}
									else
											{
												printf("Date is Incorrect\n");
												datecheck();
											}
								}
								else
											{
												printf("Date is Incorrect\n");
												datecheck();
											}
							}
							else
											{
												printf("Date is Incorrect\n");
												datecheck();
											}
						}
						else
											{
												printf("Date is Incorrect\n");
												datecheck();
											}
					}
					else
											{
												printf("Date is Incorrect\n");
												datecheck();
											}
		 	   }
		 	   else
											{
												printf("Date is Incorrect\n");
												datecheck();
											}
		    }
		    else
											{
												printf("Date is Incorrect\n");
												datecheck();
											}
	    }
	    else
        {
    	printf("Date is Incorrect\n");
		datecheck();
	    }
	    
    }
    else
    {
    	printf("Date is Incorrect\n");
		datecheck();
	}
	return 0;
}

