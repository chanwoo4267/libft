#include "stdio.h"
#include "string.h"
#include "stdlib.h"

int main()
{
	char a[10] = "test";
	printf("%s\n", memcpy(0, a, 2));
}