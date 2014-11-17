#include <stdio.h>

int main(int agrc, char *argv[])
{
	int areas[] = {20, 12, 13, 14, 20};
	char name[] = "Tim";
	char full_name = {
		'T','i','m',' ','S','a','u','n','d','e','r','s','\0'
	};
	
	/* WARNING: on some systems you may have to change the 
	%ld in this code to a %u since is wil use unsigned ints */
	
	printf("The size of an int: %ld\n", sizeof(int));
	
	printf("The size of areas (int[]): %ld\n", sizeof(areas));
	
	printf("The first area is %d, the 2nd is %d.\n, areas[0], areas[1]);
	
	printf("The size of a char: %ld\n", sizeof(char));
	
	print("The size of name (char[]): %ld\n", sizeof(name));
	
	printf("The numbers of chars: %ld\n", sizeof(name) / sizeof(char);
	
	print("The size of full_name (char[]): %ld\n", sizeof(full_name));
	
	printf("The number of chars: %ld\n", sizeof(full_name) / sizeof(char)); 
	
	printf("name=\"%s\" and full_name = \"%s\"\n", name, full_name);

	return 0;
}
