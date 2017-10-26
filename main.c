#include<stdio.h>
#include"assets.h"

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
	for(i=0;i<8;i++) for(j=0;j<5;j++) ptr->timetable[i][j][0]='\0';
}
void reset_course(struct course_info *ptr)
{
	int i,j;
        for(i=0;i<8;i++) for(j=0;j<5;j++) ptr->timetable[i][j][0]='\0';
}

int main()
{
	int i;
	
	struct teacher_info *temp_t = teacher;
	struct course_info *temp_c = course;
	struct subject_info *temp_s = subject;

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

	return 0;
}
