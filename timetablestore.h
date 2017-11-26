store_teacher_timetable()
{
  struct teacher_info *temp;
  
  FILE *fp;
  char *s;
  s=strcat(temp->id,".csv");
	FILE *fp;
	fp=fopen(s,"w+");
	fclose(fp);
  
  for(i=0;i<5;i++)
    for(j=0;j<8;j++)
        {
        fprintf(fp,",%s"temp->timetable[i][j]);
        
          }
          
}
store_course_timetable()
{
  struct course_info *temp;
  struct subject_info *ptr;
  
  FILE *fp;
  char *s;
  s=strcat(ptr->code,".csv");
	FILE *fp;
	fp=fopen(s,"w+");
	fclose(fp);
  
  for(i=0;i<5;i++)
    for(j=0;j<8;j++)
        {
        fprintf(fp,",%s"temp->timetable[i][j]);
        
          }
          
}
