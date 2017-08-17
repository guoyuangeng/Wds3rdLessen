#include <stdio.h>
int main()
{
	char Str[1024] = "Those are in .data section which can be modified!\n";
	printf(Str);
	Str[0] = 't';
	printf(Str);
	
	char* pcOnly = "Those are in .only section which can not be modified!\n";
	printf(pcOnly);
	return 0;
}

