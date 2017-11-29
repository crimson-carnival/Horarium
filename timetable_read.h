void read_teacher_timetable(struct teacher_info *ptr)
{
    FILE *fp;
    char *s;
    int i, j;
    char timetable[5][8][10];

    s = strcat(ptr->id,"");
	fp = fopen(s,"a+");
    rewind(fp);

    for(i=0;i<5;i++)
    {
        for(j=0;j<8;j++)
        {
            fscanf(fp,"%s", timetable[i][j]);
            ptr->timetable[i][j] = strcat(timetable[i][j],"\0");
            printf("%s\t",ptr->timetable[i][j]);
        }
        printf("\n");
    }
	fclose(fp);
}

void read_course_timetable(struct course_info *ptr)
{
    FILE *fp;
    char *s;
    int i, j;
    char timetable[5][8][10];

    s = strcat(ptr->id,"");
    fp = fopen(s,"a+");
    rewind(fp);

    for(i=0;i<5;i++)
    {
        for(j=0;j<8;j++)
        {
            fscanf(fp,"%s", timetable[i][j]);
            ptr->timetable[i][j] = strcat(timetable[i][j],"\0");
            printf("%s\t",ptr->timetable[i][j]);
        }
        printf("\n");
    }
	fclose(fp);
}
