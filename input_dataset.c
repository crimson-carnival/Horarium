#include<stdio.h>

void input_teacher()
{
    FILE *fp;
    fp=fopen("test.txt","a");
    char name[30], id[10], subject_code[10];

	printf("Name: ");
	scanf("%s",name);
    fprintf(fp,"%s ",name);
	printf("ID: ");
	scanf("%s",id);
	fprintf(fp,"%s ",id);
	printf("Subject code for the teacher's subject: ");
	scanf("%s",subject_code);
	fprintf(fp,"%s ",subject_code);
    fclose(fp);
}

void input_course()
{
    FILE *fp;
    fp=fopen("test.txt","a");
    char name[50], id[10];
    int students;

	printf("Enter course name: ");
	scanf("%s",name);
    fprintf(fp,"%s ",name);
	printf("Enter course ID: ");
    scanf("%s",id);
    fprintf(fp,"%s ",id);
	printf("Enter number of students: ");
	scanf("%d",&students);
	fprintf(fp,"%d ",students);
    fclose(fp);
}

void input_subject()
{
    FILE *fp;
    fp=fopen("test.txt","a");
    char name[50], code[10];
    int credits;

	printf("Enter subject's name: ");
	scanf("%s",name);
	fprintf(fp,"%s ",name);
	printf("Enter subject code: ");
	scanf("%s",code);
	fprintf(fp,"%s ",code);
	printf("Enter credits: ");
	scanf("%d",&credits);
	fprintf(fp,"%d ",credits);
    fclose(fp);
}

int main()
{
    int i;

    for(i=0;i<5;i++)
	{
		printf("\n\nPlease enter the details for subject %d:\n",(i+1));
        input_subject();
	}
	for(i=0;i<5;i++)
	{
		printf("Please enter the details for teacher %d:\n",(i+1));
		input_teacher();
	}
	for(i=0;i<2;i++)
	{
		printf("Please enter the details for course %d:\n",(i+1));
		input_course();
	}
}
