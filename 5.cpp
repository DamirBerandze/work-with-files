//Задача: удалить файл.

#include <stdio.h>

main()
{
	if(remove("new file for 1.1.txt") != 0)	printf("File didn`t found");

	return 0; 
}
