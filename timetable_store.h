void store_teacher_timetable(struct teacher_info *ptr)
{
    FILE *fp;
    char *s;
    int i, j;

    s = strcat(ptr->id,".txt");
	fp = fopen(s,"w+");

    for(i=0;i<5;i++)
    {
        for(j=0;j<8;j++)
        {
            fprintf(fp,"%s ",ptr->timetable[i][j]);
        }
    }
	fclose(fp);
}
void store_course_timetable(struct course_info *ptr)
{
    FILE *fp;
    char *s;
    int i,j;

    s=strcat(ptr->id,".txt");
	fp=fopen(s,"w+");

    for(i=0;i<5;i++)
    {
        for(j=0;j<8;j++)
        {
            fprintf(fp,"%s ",ptr->timetable[i][j]);
        }
    }
	fclose(fp);
}
