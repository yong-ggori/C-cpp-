#include <stdio.h>
#include <string.h>

typedef struct student {
	int studentID;
	char name[20];
	double score;
}Student;

void print_st(Student*);
void save_st(Student*);
void input_st(Student*);

int main(void) {
	Student st[2] = { { 1, "ABC", 85.0 }, { 2, "DEF", 95.2} };
	//strcpy(st[0].name, "abc");
	//strcpy(st[1].name, "def");
	input_st(st);
	print_st(st);
	//for (int idx = 0; idx < 2; idx++) {
	//	printf("%d %s %.2lf\n", st[idx].studentID, st[idx].name, st[idx].score);
	//}

	return 0;
}
void input_st(Student* st) {
	strcpy(st[0].name, "abc");
	strcpy(st[1].name, "def");
}
void print_st(Student* st) {
	for (int idx = 0; idx < 2; idx++) {
		printf("%d %s %.2lf\n", st->studentID, st->name, st->score);
		st++;
		//(*st).studentID, (*st).name, (*st).score
	}
}