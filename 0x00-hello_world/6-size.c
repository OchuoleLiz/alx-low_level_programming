include<stdio.h>
int main() {
	char charType;
	int intType;
	long int intType;
	long long intType;
	float floatType;

	printf("size of a char: %zu bytes\n", sizeof(charType));
	printf("size of an int: %zu bytes\n", sizeof(intType));
	printf("size of a long int: %ld bytes\n", sizeof(intType));
	printf("size of a long long int: %lld bytes\n", sizeof(intType));
	printf("size of a float: %f bytes\n", sizeof(floatType));

	return 0;
}


