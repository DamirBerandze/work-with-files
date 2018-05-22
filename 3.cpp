//Задача: открыть какой-нибудь файл и посчитать количество символов в нём.

#include <stdio.h>
#include <windows.h>

main()
{
	FILE *file = fopen("new file for 1.1.txt","r");
	
	int sum = 0;
	while(fgetc(file) != EOF)	sum++;
	
	printf("End of file");
	
	return 0;
}
