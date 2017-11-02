struct teacher_info *t = teacher;
struct course_info *c = course;
struct subject_info *s = subject;
struct subject_info *s_temp = subject;
struct teacher_info *t_temp = teacher;

int ind = 0; //index of current teacher/subject being checked/assigned
int lunch = 0; //Alternates between 0 and 1 so that half the classes have a break in slot 3 and half in slot 4
int day_classes = 0; //Number of classes held in the day
