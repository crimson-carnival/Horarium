#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"assets.h"
#include"resources.h"
#include"input.h"
#include"output.h"
#include"input_s.h"
#include"generate.h"

int main()
{
	int i, j, k;

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

    int c2, emp;
    do
    {
        printf("\n\t---Select your choice---------\n");
        printf("\n\t1. INSERT_TEACHER\n\t2.INSERT_COURSE\n\t3.INSERT_SUBJECT\n");

        printf("\n\t4. EXIT");
        printf("\n\n------------------------------------------\n");
        printf("\nEnter your choice:");
        scanf("%d", &c2);
        printf("\n");
        switch (c2)
        {
            case 1:
                insert_teachers2();
                break;
            case 2:
                insert_course2();
                break;
            case 3:
                insert_subject2();
                break;
            case 4:
                exit(1);
                break;
            default:
                printf("\nYour choice is wrong\nPlease try again...\n");
            break;
        }
    } while (c2 != 4);

    for(i=0;i<2;i++) {
        s_temp = s;
        lunch = i%2;
        day_classes = 0;
        timetable(c+i,0,0);
        if(day_classes < 4) printf("Timtable not possible.\n");
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
