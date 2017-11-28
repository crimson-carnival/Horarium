#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"assets.h"
#include"resources.h"
#include"input.h"
#include"output.h"
#include"generate.h"
#include"file_read.h"

int main()
{
	int i, j, k;
    int creds[] = {4,4,4,4};

    struct teacher_info *temp_t = t;
    struct course_info *temp_c = c;
    struct subject_info *temp_s = s;

	/*for(i=0;i<5;i++)
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
	}*/

    insert_teacher1();
    insert_teacher2();
    insert_teacher3();
    insert_teacher4();
    insert_teacher5();
    insert_course_mft();
    insert_course_ogi();
    insert_subject();

    for(i=0;i<2;i++) {
        for(j = 0; j<5; j++) (s_temp+j)->credits = creds[j];
        lunch = i%2;
        day_classes = 0;
        timetable(c+i,0,0);
        if(day_classes < 4){
            printf("Timetable not possible.\n");
        }
        else{
            store_course_timetable(c+1);
        }
    }

    for(i=0;i<5;i++) store_teacher_timetable(t);
	
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
