#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

size_t my_strlen(const char * string);

int main(int argc, char **argv) 
{
	char *str = "test";
	assert(my_strlen(str) == strlen(str));
	return 0;
}

size_t my_strlen(const char * string)
{
	printf("%p - string\n", string);
	char *walker = string;
	printf("%p - walker\n", walker);
	while (*walker != '\0') {
		printf("%p - walker (%c)\n", walker, *walker);
		walker++;
	}
	return walker - string;
}