// Program To ShutDown Windows
#include <stdio.h>
#include <stdlib.h>
void main()
{
	printf("Do You Want Shut Down Your Machine (Y/N): ");
	char ch;
	scanf("%c",&ch);
	{
		if (ch == 'y' || ch == 'Y')
		{
			printf("Thank you");
			system("C:\\WINDOWS\\System32\\shutdown /s");
		}
		else
			printf("Thank you");
	}
}
