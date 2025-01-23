#include <stdio.h>
#include <string.h>
void menu();
int check(int);
void repeat(char mess1[]);
void reverse(char mess2[]);
void capital(char mess3[]);
void ladder(char mess4[]);
int n;
char message[1000];
int main()
{
	//call menu list from bottom function
	menu();
	//ask user to enter their string message
	printf("\n\n\t enter your message\n");
	gets(message);
	//let user choose the activity to perform in the string
	printf("\n\t type the menu number:");
	scanf("%d",&n);
	check(n);
	return 0;
}

void menu(void)
{
	printf("\t the menu is:\n");
	printf("\t 1-print the message the number of times as your words\n");
	printf("\t 2-print the message in reverse order\n");
	printf("\t 3-print message in CAPITAL letters\n");
	printf("\t 4-create the message in the staircase pattern\n");
	printf("\t 5-exit");
}
int check(int m)
{
	switch(m)
	{
		case 1:
			repeat(message);
			break;
			case 2:
				reverse(message);
				break;
				case 3:
					capital(message);
					break;
					case 4:
						ladder(message);
						break;
						case 5:
							return 0;
							break;
						default:
							printf("\n\nplease enter the valid number\n\n\n");
							menu();
							printf("\n\tfor the required operations from menu \n type any number from 1 to 5: ");
							scanf("%d",&n);
							check(n);
	}
}

void repeat(char mess1[])
{
	int i, count=0, word;
	char msg1[1000];
	strcpy(msg1,mess1);
	for(i=0;msg1[i]!='\0';i++)
	{
		if(msg1[i]==' ')
		{
		 count++;
		}
	}
	word=count+1;
	printf("the no. of words in the message =%d\n",word);
	printf("\n\n");
	for(i=1;i<=word;i++)
	{
		puts(msg1);
		printf("\n");
	}
	printf("\n\n\n\n");
	menu();
	printf("\n\t For other operation from menu, type a number from 1 to 5:  ");
	scanf("%d",&n);
	check(n);
}

void reverse(char mess2[])
{
	char msg2[1000];
	strcpy(msg2,mess2);
	strrev(msg2);
	printf("\n\n");
	puts(msg2);
	printf("\n\n\n\n");
	menu();
	printf("\n\t For other operation from menu, type a number from 1 to 5:  ");
	scanf("%d",&n);
	check(n);
}
void capital(char mess3[])
{
	char msg3[1000];
	strcpy(msg3,mess3);
	strupr(msg3);
	printf("\n\n");
	puts(msg3);
	printf("\n\n\n\n");
	menu();
	printf("\n\t For other operation from menu, type a number from 1 to 5:  ");
	scanf("%d",&n);
	check(n);
}
void ladder(char mess4[])
{
	char space[1000]={' '};
	char a[1000]={};
	char msg4[1000];
	strcpy(msg4,mess4);
	int i,m;
	printf("type the no. of stairs of staircase: ");
	scanf("%d",&m);
	printf("\n\n");
	for(i=1;i<=m;i++)
	{
		strcat(a,space);
		strcat(a,msg4);
		printf("%s\n",a);
	}
	printf("\n\n\n\n");
	menu();
	printf("\n\t For other operation from menu, type a number from 1 to 5:  ");
	scanf("%d",&n);
	check(n);
}
