//Задача: открыть какой-нибудь файл, вывести его содержимое на экран.


#include <stdio.h>
#include <windows.h>

main()
{
	char s[80];
	
	FILE *file = fopen("new file for 1.1.txt","r");
	
	fgets(s,80,file);
	printf("%s\n",s);
	
	system("pause");
	return 0;
}
