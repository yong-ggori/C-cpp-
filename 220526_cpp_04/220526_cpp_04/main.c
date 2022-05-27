#include <stdio.h>
#include <string.h>

char* my_strcat(char*, char*);
char* my_strcpy(char*, char*);

int main(int argc, char* argv[]) 
{
	char fruit[80] = "straw";

	my_strcat(fruit, "berry");
	printf("연결된 문자열 : %s\n", fruit);

	my_strcpy(fruit, "choco banana");
	printf("복사된 문자열 : %s\n", fruit);

	return 0;
}
char* my_strcat(char* pd, char* ps) {
	char* po = pd;

	while (*pd != '\0')
		pd++;
	while (*ps != '\0')
		*(pd++) = *(ps++);
	*pd = '\0';

	return po;
}
char* my_strcpy(char* pd, char* ps) {
	char* po = pd;

	while (*ps != '\0')
		*(pd++) = *(ps++);
	*pd = '\0';

	return po;
}
