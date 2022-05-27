//***********************************
//				C º¹½À
//***********************************
#include <stdio.h>
#include <string.h>

char* my_strcat(char*, char*);

int main(int argc, char** argv) {

	char fruit[80] = "1234567894561230";
	//char fruit[80];

	strcpy(fruit, "straw");
	my_strcat(fruit, "berry");

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