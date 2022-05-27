//***********************************
//				C º¹½À
//***********************************
#include <stdio.h>

char* my_strcat(char*, char*);

int main(int argc, char** argv) {

	char fruit[80] = "straw";
	int idx = 0;

	my_strcat(fruit, "berry");

	while (1) {
		if (argv[idx] != NULL)
			printf("argv[%d] : %s\n", idx++, argv[idx]);
		else break;
	}

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