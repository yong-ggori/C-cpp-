#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct student {
	int studentID;
	char name[10];
	double score;
}Student;

void print_st(Student*);
void save_st(Student*);
void read_st(Student*, int, FILE*);
void input_st(Student*);

int main(void) {
	//Student st[2] = { { 1, "ABC", 85.0 }, { 2, "DEF", 95.2} };

	//input_st(st);
	//save_st(st);
	Student* st;
	FILE* rfp;

	rfp = fopen("st.db", "r");
	if (!rfp) {
		fputs("st.db 파일을 열 수 없습니다.\n", stdout);
		return 1;
	}
	fseek(rfp, 0, SEEK_END); //파일의 마지막 부분을 찾는 함수

	int size = ftell(rfp);
	int count = size / sizeof(Student);
	printf(" %d %d \n", size, count);

	st = (Student*)malloc(count * sizeof(Student));
	fseek(rfp, 0, SEEK_SET); //파일의 처음 부분을 찾는 함수

	read_st(st, count, rfp);
	print_st(st);
	free(st);

	return 0;
}
void input_st(Student* st) {
	strcpy(st[0].name, "abc");
	strcpy(st[1].name, "def");
}
void save_st(Student* st) {
	FILE* wfp;
	wfp = fopen("st.db", "w");
	if (wfp == NULL) {
		fputs("st.db 파일을 열 수 없습니다.\n", stdout);
		exit(1);
	}
	fwrite(st, sizeof(Student), 2, wfp);
}
void read_st(Student* st, int count, FILE* rfp) {
	fread(st, sizeof(Student), count, rfp);
}
void print_st(Student* st) {
	for (int idx = 0; idx < 2; idx++) {
		printf("%d %s %.2lf\n", st[idx].studentID, st[idx].name, st[idx].score);
	}
	for (int idx = 0; idx < 2; idx++) {
		//printf("%d %s %.2lf\n", (*st).studentID, (*st).name, (*st).score);
		printf("%d %s %.2lf\n", st->studentID, st->name, st->score);
		st++;
		//(*st).studentID, (*st).name, (*st).score
	}
}