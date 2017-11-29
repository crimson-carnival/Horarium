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
    printf("Course name: ");
    printf("%s\n",ptr->name);
    printf("Course ID: ");
    printf("%s\n",ptr->id);
    printf("Number of students: ");
    printf("%d\n",ptr->students);
}

void display_subject(struct subject_info *ptr)
{
    printf("Subject's name: ");
    printf("%s\n",ptr->name);
    printf("Subject code: ");
    printf("%s\n",ptr->code);
    printf("Credits: ");
    printf("%d\n",ptr->credits);
}
