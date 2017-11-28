void file_read() {
    FILE *fp;
    char *s;
    char* timetable[5][8];
    int i, j;
    char* course_ID;
    printf("Enter course ID to view the timetable: ");
    scanf("%s",course_ID);
    s=strcat(course_ID,".csv");
	fp=fopen(s,"r");

    for(i=0;i<5;i++)
    {
        for(j=0;j<8;j++)
        {
            fscanf(fp,"%s", timetable[i][j]);
            printf("%s", timetable[i][j]);
        }
        printf("\n");
    }
	fclose(fp);
}
