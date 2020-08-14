#include "sds.h"
#include <stdio.h>

int main()
{
	const char * str = "china\0";
	sds s = sdsnew(str);
	printf("str is : %s\n", s);
	printf("type is : %c\n", s->flags);
	return 0;
}
