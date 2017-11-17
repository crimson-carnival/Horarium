void input_teacher(struct teacher_info *ptr)
{
	printf("Name: ");
	scanf("%s",ptr->name);
	printf("ID: ");
	scanf("%s",ptr->id);
	printf("Subject code for the teacher's subject: ");
	scanf("%s",ptr->subject_code);
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

void input_subject(struct subject_info *ptr)
{
	printf("Enter subject's name: ");
	scanf("%s",ptr->name);
	printf("Enter subject code: ");
	scanf("%s",ptr->code);
	printf("Enter credits: ");
	scanf("%d",&ptr->credits);
}
