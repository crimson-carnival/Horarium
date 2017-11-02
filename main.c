#include<stdio.h>
#include<string.h>
#include"assets.h"

struct teacher_info *t = teacher;
struct course_info *c = course;
struct subject_info *s = subject;
struct subject_info *s_temp = subject;
struct teacher_info *t_temp = teacher;

int ind = 0; //index of current teacher/subject being checked/assigned
int lunch = 0; //Alternates between 0 and 1 so that half the classes have a break in slot 3 and half in slot 4
int day_classes = 0; //Number of classes held in the day

void input_teacher(struct teacher_info *ptr)
{
	printf("Name: ");
	scanf("%s",ptr->name);
	printf("ID: ");
	scanf("%s",ptr->id);
	printf("Subject code for the teacher's subject: ");
	scanf("%s",ptr->subject_code);
}
void display_teacher(struct teacher_info *ptr)
{
    printf("Name: ");
    printf("%s\n",ptr->name);
    printf("ID: ");
    printf("%s\n",ptr->id);
    printf("Subject code for the teacher's subject: ");
    printf("%s\n",ptr->subject_code);
}

void input_course(struct course_info *ptr)
{
	printf("Enter course name: ");
	scanf("%s",ptr->name);
	printf("Enter course ID: ");
    scanf("%s",ptr->id);
	printf("Enter number of students: ");
	scanf("%d",&ptr->students);
}
void display_course(struct course_info *ptr)
{
    printf("Enter course name: ");
    printf("%s\n",ptr->name);
    printf("Enter course ID: ");
    printf("%s\n",ptr->id);
    printf("Enter number of students: ");
    printf("%d\n",ptr->students);
}

void input_subject(struct subject_info *ptr)
{
	printf("Enter subject's name: ");
	scanf("%s",ptr->name);
	printf("Enter subject code: ");
	scanf("%s",ptr->code);
	printf("Enter credits: ");
	scanf("%d",&ptr->credits);
}
void display_subject(struct subject_info *ptr)
{
    printf("Enter subject's name: ");
    printf("%s\n",ptr->name);
    printf("Enter subject code: ");
    printf("%s\n",ptr->code);
    printf("Enter credits: ");
    printf("%d\n",ptr->credits);
}

void reset_teacher(struct teacher_info *ptr)
{
	int i,j;
	for(i=0;i<5;i++) for(j=0;j<8;j++) ptr->timetable[i][j]="Break";
}
void reset_course(struct course_info *ptr)
{
	int i,j;
    for(i=0;i<5;i++) for(j=0;j<8;j++) ptr->timetable[i][j]="Break";
}

void timetable(struct course_info *ptr, int i, int j)
{
    if( (lunch == 0 && j == 3) || (lunch == 1 && j == 4) ) timetable(ptr,i,j+1);
    if(day_classes == 4)
    {
        if(i!=4)
        {
            day_classes = 0;
            timetable(ptr, i+1, 0); //Next day
        }
        else return;
    }

    int n;

    for(n=0;n<5 && strcmp((t_temp+ind)->timetable[i][j],"Break")!=0; n++)
    {
        if(ind==4) ind = 0;
        else ind++;
    }
    if(n<5)
    {
        if((s_temp+ind)->credits>0)
        {
            ptr->timetable[i][j] = (t_temp+ind)->subject_code;
            (t_temp+ind)->timetable[i][j] = ptr->name;
            (s_temp+ind)->credits--;
            ind++;
        }
        day_classes++;
    }
    if(i==4 && j==7) return;
    else if(j==7)
    {
        day_classes = 0;
        timetable(ptr, i+1, 0);
    }
    else timetable(ptr, i, j+1); //Next class in same day
}

int main()
{
	int i, j, k;

    struct teacher_info *temp_t = t;
    struct course_info *temp_c = c;
    struct subject_info *temp_s = s;

	for(i=0;i<5;i++)
	{
		printf("Please enter the details for subject %d:\n",(i+1));
                input_subject(temp_s);
                temp_s++;
	}
	for(i=0;i<5;i++)
	{
		printf("Please enter the details for teacher %d:\n",(i+1));
		input_teacher(temp_t);
		reset_teacher(temp_t);
		temp_t++;
	}
	for(i=0;i<2;i++)
	{
		printf("Please enter the details for course %d:\n",(i+1));
		input_course(temp_c);
		reset_course(temp_c);
		temp_c++;
	}

    for(i=0;i<2;i++) {
        s_temp = s;
        lunch = i%2;
        day_classes = 0;
        timetable(c+i,0,0);
    }
	
    //Display
    temp_t=teacher;
	temp_c=course;
	temp_s=subject;

	for(i=0;i<5;i++)
	{
		printf("\nFor i=%d:\n",i);
		printf("Subject Details:\n");
		display_subject(temp_s);
		temp_s++;
		printf("Teacher Details:\n");
                display_teacher(temp_t);
                temp_t++;
		if(i<2)
		{
			printf("Course Details:\n");
                	display_course(temp_c);
                	temp_c++;
		}
	}

    printf("Timetables: ");

    for(i=0;i<5;i++)
    {
        printf("Course %d\n\n",(i+1));
        for(j=0;j<5;j++)
        {
            for(k=0;k<5;k++) printf("%s\t",c->timetable[j][k]);
            printf("\n");
        }
    }

	return 0;
}
