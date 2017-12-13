void load_teacher(struct teacher_info *ptr)
{
	fscanf(fp,"%s",ptr->name);
	fscanf(fp,"%s",ptr->id);
	fscanf(fp,"%s",ptr->subject_code);
}

void load_course(struct course_info *ptr)
{
    fscanf(fp,"%s",ptr->name);
    fscanf(fp,"%s",ptr->id);
	fscanf(fp,"%d",&ptr->students);
}

void load_subject(struct subject_info *ptr)
{
	fscanf(fp,"%s",ptr->name);
	fscanf(fp,"%s",ptr->code);
	fscanf(fp,"%d",&ptr->credits);
}
