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
    int n;
    if( (lunch == 0 && j == 3) || (lunch == 1 && j == 4) )
    {
        timetable(ptr,i,j+1);
        return;
    }
    if(day_classes == 4)
    {
        if(i!=4)
        {
            day_classes = 0;
            timetable(ptr, i+1, 0); //Next day
        }
        return;
    }
    for(n=0;n<5 && strcmp((t_temp+ind)->timetable[i][j],"Break")!=0; n++)
    {
        if(ind==4) ind = 0;
        else ind++;
    }
    if(n<5)
    {
        if((s_temp+ind)->credits>0)
        {
            ptr->timetable[i][j] = strcat((t_temp+ind)->subject_code,"");
            (t_temp+ind)->timetable[i][j] = strcat(ptr->name,"");
            (s_temp+ind)->credits--;
            if(ind==4) ind = 0;
            else ind++;
            day_classes++;
        }
    }
    if(i==4 && j==7) return;
    else if(j==7)
    {
        day_classes = day_classes-4;
        timetable(ptr, i+1, 0);
    }
    else timetable(ptr, i, j+1); //Next class in same day
}
