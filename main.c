#include<stdio.h>
#include<string.h>
#include<stdlib.h>
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

//    FUNCTION TO INSERT RECORDS  FOR TEACHERS TO THE FILE
void insert_teachers2(){

    int i=1, n;
    char str[] = ",";
    char str2[] = "\n";
    FILE *fp;
    fp = fopen("Teacher.csv", "a+");
    printf("\n\n\tEnter number of teachers : ");
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        system("cls");
        printf("\n\n\n\t\tEnter the id           : ");
        scanf("%s", &teacher[i].id);
        fwrite(&teacher[i].id, sizeof(teacher[i]), 1, fp);
        fwrite(str,1, sizeof(str), fp);
        printf("\n\n\n\t\tEnter the Name         : ");
        scanf("%s", &teacher[i].name);
        fwrite(&teacher[i].name, sizeof(teacher[i]), 1, fp);
        fwrite(str,1, sizeof(str), fp);
        printf("\n\n\n\t\tEnter the subject_code : ");
        scanf("%s", &teacher[i].subject_code);
        fwrite(&teacher[i].subject_code, sizeof(teacher[i]), 1, fp);
        //fwrite(str,1, sizeof(str), fp);
        fwrite(str2,1, sizeof(str2), fp);
    }
    fclose(fp);
}
//    FUNCTION TO INSERT RECORDS  FOR COURSE TO THE FILE
void insert_course2(){

    int i=1, n;
    char str[] = ",";
    char str2[] = "\n";
    FILE *fp;
    fp = fopen("Course.csv", "a+");
    printf("\n\n\tEnter number of courses : ");
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        system("cls");
        printf("\n\n\n\t\tEnter the name           : ");
        scanf("%s", &course[i].name);
        fwrite(&course[i].name, sizeof(course[i]),1, fp);
        fwrite(str,1, sizeof(str),  fp);
        printf("\n\n\n\t\tEnter the ID         : ");
        scanf("%s", &course[i].id);
        fwrite(&course[i].id, sizeof(course[i]),1,  fp);
        fwrite(str,1, sizeof(str), fp);
        printf("\n\n\n\t\tEnter the no. of students : ");
        scanf("%f", &course[i].students);
        fwrite(&course[i].students, sizeof(course[i]), 1, fp);
        //fwrite(str,1, sizeof(str), fp);
        fwrite(str2,1, sizeof(str2), fp);
    }
    fclose(fp);
}
//    FUNCTION TO INSERT RECORDS FOR SUBJECT  TO THE FILE
void insert_subject2(){

    int i=1, n;
    char str[] = ",";
    char str2[] = "\n";
    FILE *fp;
    fp = fopen("Subject.csv", "a+");
    printf("\n\n\tEnter number of subjects : ");
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        system("cls");
        printf("\n\n\n\t\tEnter the name           : ");
        scanf("%s", &subject[i].name);
        fwrite(&subject[i].name, sizeof(subject[i]), 1, fp);
        fwrite(str,1, sizeof(str), fp);
        printf("\n\n\n\t\tEnter the credits for the subject         : ");
        scanf("%d", &subject[i].credits);
        fwrite(&subject[i].credits, sizeof(subject[i]), 1, fp);
        fwrite(str,1, sizeof(str), fp);
        printf("\n\n\n\t\tEnter the subject_code : ");
        scanf("%s", &subject[i].code);
        fwrite(&subject[i].code, sizeof(subject[i]), 1, fp);
        //fwrite(str,1, sizeof(str), fp);
        fwrite(str2,1, sizeof(str2), fp);
    }
    fclose(fp);
}

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
