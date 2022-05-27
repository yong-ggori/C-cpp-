//***********************************
//				C º¹½À
//***********************************
#include <stdio.h>

char* my_strcat(char*, char*);

int main(int argc, char* argv[]) {
	int num0 = 0;
	int num1 = 1;
	int num2 = 2;
	int* np = &num2 + 3;

	char fruit[80] = "straw";
	my_strcat(fruit, "berry");

	printf("address test : %p\n", &num2);
	printf("address test : %p\n", np);
	printf("address test : %p\n", &num1);

	printf("test : %d\n", *(&num2));
	printf("test : %d\n", *(np));
	printf("linked string array : %s\n", fruit);
	return 0;
}
char* my_strcat(char* pd, const char* ps) {
	char* po = pd;
	while (*pd != '\0')
		pd++;
	while (*ps != '\0')
		*(pd++) = *(ps++);
	*pd = '\0';

	return po;
}