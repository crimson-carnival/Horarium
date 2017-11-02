void display_teacher(struct teacher_info *ptr)
{
    printf("Name: ");
    printf("%s\n",ptr->name);
    printf("ID: ");
    printf("%s\n",ptr->id);
    printf("Subject code for the teacher's subject: ");
    printf("%s\n",ptr->subject_code);
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

void display_subject(struct subject_info *ptr)
{
    printf("Enter subject's name: ");
    printf("%s\n",ptr->name);
    printf("Enter subject code: ");
    printf("%s\n",ptr->code);
    printf("Enter credits: ");
    printf("%d\n",ptr->credits);
}
