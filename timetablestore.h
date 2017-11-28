void store_teacher_timetable(struct teacher_info *temp;)
{
  
  FILE *fp;
  char *s;
  s=strcat(temp->id,".csv");
	FILE *fp;
	fp=fopen(s,"w+");
	fclose(fp);
  
  for(i=0;i<5;i++)
  {  for(j=0;j<8;j++)
       	{
       	fprintf(fp," %s"temp->timetable[i][j]);
             }
  }
          
}
void store_course_timetable(struct course_info *temp;)
{

  
  FILE *fp;
  char *s;
  s=strcat(temp->id,".csv");
	FILE *fp;
	fp=fopen(s,"w+");
	fclose(fp);
  
  for(i=0;i<5;i++)
  { for(j=0;j<8;j++)
        {
        fprintf(fp," %s"temp->timetable[i][j]);
        
          }
  }       
}
