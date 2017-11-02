//    FUNCTION TO INSERT RECORDS  FOR TEACHERS TO THE FILE
void insert_teachers2(){

    int i=1, n;
    char str[] = ",";
    char str2[] = "\n";
    FILE *fp;
    fp = fopen("Teacher.csv", "a+");
    printf("\n\n\tEnter number of teachers : ");
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        system("cls");
        printf("\n\n\n\t\tEnter the id           : ");
        scanf("%s", &teacher[i].id);
        fwrite(&teacher[i].id, sizeof(teacher[i]), 1, fp);
        fwrite(str,1, sizeof(str), fp);
        printf("\n\n\n\t\tEnter the Name         : ");
        scanf("%s", &teacher[i].name);
        fwrite(&teacher[i].name, sizeof(teacher[i]), 1, fp);
        fwrite(str,1, sizeof(str), fp);
        printf("\n\n\n\t\tEnter the subject_code : ");
        scanf("%s", &teacher[i].subject_code);
        fwrite(&teacher[i].subject_code, sizeof(teacher[i]), 1, fp);
        //fwrite(str,1, sizeof(str), fp);
        fwrite(str2,1, sizeof(str2), fp);
    }
    fclose(fp);
}
//    FUNCTION TO INSERT RECORDS  FOR COURSE TO THE FILE
void insert_course2(){

    int i=1, n;
    char str[] = ",";
    char str2[] = "\n";
    FILE *fp;
    fp = fopen("Course.csv", "a+");
    printf("\n\n\tEnter number of courses : ");
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        system("cls");
        printf("\n\n\n\t\tEnter the name           : ");
        scanf("%s", &course[i].name);
        fwrite(&course[i].name, sizeof(course[i]),1, fp);
        fwrite(str,1, sizeof(str),  fp);
        printf("\n\n\n\t\tEnter the ID         : ");
        scanf("%s", &course[i].id);
        fwrite(&course[i].id, sizeof(course[i]),1,  fp);
        fwrite(str,1, sizeof(str), fp);
        printf("\n\n\n\t\tEnter the no. of students : ");
        scanf("%f", &course[i].students);
        fwrite(&course[i].students, sizeof(course[i]), 1, fp);
        //fwrite(str,1, sizeof(str), fp);
        fwrite(str2,1, sizeof(str2), fp);
    }
    fclose(fp);
}
//    FUNCTION TO INSERT RECORDS FOR SUBJECT  TO THE FILE
void insert_subject2(){

    int i=1, n;
    char str[] = ",";
    char str2[] = "\n";
    FILE *fp;
    fp = fopen("Subject.csv", "a+");
    printf("\n\n\tEnter number of subjects : ");
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        system("cls");
        printf("\n\n\n\t\tEnter the name           : ");
        scanf("%s", &subject[i].name);
        fwrite(&subject[i].name, sizeof(subject[i]), 1, fp);
        fwrite(str,1, sizeof(str), fp);
        printf("\n\n\n\t\tEnter the credits for the subject         : ");
        scanf("%d", &subject[i].credits);
        fwrite(&subject[i].credits, sizeof(subject[i]), 1, fp);
        fwrite(str,1, sizeof(str), fp);
        printf("\n\n\n\t\tEnter the subject_code : ");
        scanf("%s", &subject[i].code);
        fwrite(&subject[i].code, sizeof(subject[i]), 1, fp);
        //fwrite(str,1, sizeof(str), fp);
        fwrite(str2,1, sizeof(str2), fp);
    }
    fclose(fp);
}
