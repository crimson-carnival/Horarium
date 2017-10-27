struct teacher_info {
	char name[30];
	char id[10];
	char subject_code[10];
	char* timetable[8][5];
} teacher[5];

struct subject_info {
	char name[10];
	int credits;
	char code[10];
} subject[5];

struct course_info {
	char name[30];
	char id[10];
	int students;
	char* timetable[8][5];
} course[2];
