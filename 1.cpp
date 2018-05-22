//Задача: создать файл, вписать в него что-нибудь.

#include <stdio.h>

main()
{
	FILE *new_file = fopen ("new file for 1.1.txt","w");
	fputs("Smile ^_^",new_file);
	
	return 0;
}
