#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"assets.h"
#include"resources.h"
#include"input.h"
#include"input_from_test.h"
#include"output.h"
#include"generate.h"
#include"timetable_read.h"
#include"timetable_store.h"

int main()
{
	int i, j, k;
    int creds[] = {4,4,4,4};
    int ch=0, loop=1;

    struct teacher_info *temp_t = t;
    struct course_info *temp_c = c;
    struct subject_info *temp_s = s;

    fp=fopen("test.txt","a+");
    rewind(fp);

    while(loop)
    {
        printf("\n\n 1) Provide input data\n 2) Read data from files \n 3) Generate and store timetable \n 4) Display course information\n 5) Display teacher information \n 6) Display subject information \n 7) Display timetable (Students view) \n 8) Display timetable (Teachers view) \n 9) Exit\n\n Choice: ");
        scanf("%d", &ch);
        switch(ch)
        {
            case 1:
                for(i=0;i<5;i++)
                {
                    printf("Please enter the details for subject %d:\n",(i+1));
                    input_subject(temp_s+i);
                }
                for(i=0;i<5;i++)
                {
                    printf("Please enter the details for teacher %d:\n",(i+1));
                    input_teacher(temp_t+i);
                    reset_teacher(temp_t+i);
                }
                for(i=0;i<2;i++)
                {
                    printf("Please enter the details for course %d:\n",(i+1));
                    input_course(temp_c+i);
                    reset_course(temp_c+i);
                }
                fclose(fp);
                break;

            case 2:
                for(i=0;i<5;i++)
                {
                    //printf("Please enter the details for subject %d:\n",(i+1));
                    load_subject(temp_s+i);
                }
                for(i=0;i<5;i++)
                {
                    //printf("Please enter the details for teacher %d:\n",(i+1));
                    load_teacher(temp_t+i);
                    reset_teacher(temp_t+i);
                }
                for(i=0;i<2;i++)
                {
                    //printf("Please enter the details for course %d:\n",(i+1));
                    load_course(temp_c+i);
                    reset_course(temp_c+i);
                }
                fclose(fp);
                break;

            /*insert_teacher1();
            insert_teacher2();
            insert_teacher3();
            insert_teacher4();
            insert_teacher5();
            insert_course_mft();
            insert_course_ogi();
            insert_subject();*/

            case 3:
                for(i=0;i<2;i++) {
                    for(j = 0; j<5; j++) (s_temp+j)->credits = creds[j];
                    lunch = i%2;
                    day_classes = 0;
                    timetable(c+i,0,0);
                    if(day_classes < 4){
                        printf("Timetable not possible.\n");
                        for(j=0;j<5;j++){ for(k=0;k<8;k++) printf("%s\t",(c+i)->timetable[j][k]);  printf("\n");}
                    }
                    else{
                        store_course_timetable(c+i);
                    }
                    //for(j=0;j<5;j++){ for(k=0;k<8;k++) printf("%s\t",(c+i)->timetable[j][k]);  printf("\n");}
                }

                for(i=0;i<5;i++) store_teacher_timetable(t+i);
                //for(i=0;i<2;i++) store_course_timetable(c+i);
                break;

            case 4:
                //Display
                for(i=0;i<2;i++)
                {
                    printf("Course Details:\n");
                    display_course(temp_c+i);
                }
                break;

            case 5:
                //Display
                for(i=0;i<5;i++)
                {
                    printf("Teacher Details:\n");
                    display_teacher(temp_t+i);
                }
                break;

            case 6:
                //Display
                for(i=0;i<5;i++)
                {
                    printf("Subject Details:\n");
                    display_subject(temp_s+i);
                }
                break;

            case 7:
                printf("\n\nTimetables:\n");
                for(i=0;i<2;i++)
                {
                    printf("\nCourse %d\n",(i+1));
                    read_course_timetable(c+i);
                }
                break;

            case 8:
                for(i=0;i<5;i++)
                {
                    printf("\nTeacher %d\n",(i+1));
                    read_teacher_timetable(t+i);
                }
                break;

            default:
                loop = 0;
                break;
        }
    }
	return 0;
}
