
void insert_teacher1(){

    int i=1, n;
    char str[] = ",";
    char str2[] = "\n";
    FILE *fp;
    fp = fopen("Teacher_1.csv", "w+");

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

    fclose(fp);

}
void insert_teacher2(){

    int i=1, n;
    char str[] = ",";
    char str2[] = "\n";
    FILE *fp;
    fp = fopen("Teacher_2.csv", "w+");

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

    fclose(fp);
}
void insert_teacher3(){

    int i=1, n;
    char str[] = ",";
    char str2[] = "\n";
    FILE *fp;
    fp = fopen("Teacher_3.csv", "w+");

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

    fclose(fp);
}
void insert_teacher4(){

    int i=1, n;
    char str[] = ",";
    char str2[] = "\n";
    FILE *fp;
    fp = fopen("Teacher_4.csv", "w+");

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

    fclose(fp);
}
void insert_teacher5(){

    int i=1, n;
    char str[] = ",";
    char str2[] = "\n";
    FILE *fp;
    fp = fopen("Teacher_5.csv", "w+");

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

    fclose(fp);
}
//    FUNCTION TO INSERT RECORDS  FOR COURSE TO THE FILE
void insert_course_mft(){

    int i=1, n;
    char str[] = ",";
    char str2[] = "\n";
    FILE *fp;
    fp = fopen("Course_mft.csv", "w+");

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
        scanf("%f", &course[i].student);
        fwrite(&course[i].student, sizeof(course[i]), 1, fp);
        //fwrite(str,1, sizeof(str), fp);
        fwrite(str2,1, sizeof(str2), fp);

    fclose(fp);
}
void insert_course_ogi(){

    int i=1, n;
    char str[] = ",";
    char str2[] = "\n";
    FILE *fp;
    fp = fopen("Course_ogi.csv", "w+");

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
        scanf("%f", &course[i].student);
        fwrite(&course[i].student, sizeof(course[i]), 1, fp);
        //fwrite(str,1, sizeof(str), fp);
        fwrite(str2,1, sizeof(str2), fp);

    fclose(fp);
}
//    FUNCTION TO INSERT RECORDS FOR SUBJECT  TO THE FILE
void insert_subject(){

    int i=1, n;
    char str[] = ",";
    char str2[] = "\n";
    FILE *fp;
    fp = fopen("Subject.csv", "a+");

        system("cls");
        printf("\n\n\n\t\tEnter the name           : ");
        scanf("%s", &subject[i].name);
        fwrite(&subject[i].name, sizeof(subject[i]), 1, fp);
        fwrite(str,1, sizeof(str), fp);
        printf("\n\n\n\t\tEnter the credits for the subject         : ");
        scanf("%d", &subject[i].credit);
        fwrite(&subject[i].credit, sizeof(subject[i]), 1, fp);
        fwrite(str,1, sizeof(str), fp);
        printf("\n\n\n\t\tEnter the subject_code : ");
        scanf("%s", &subject[i].code);
        fwrite(&subject[i].code, sizeof(subject[i]), 1, fp);
        //fwrite(str,1, sizeof(str), fp);
        fwrite(str2,1, sizeof(str2), fp);

    fclose(fp);
}

// MAIN PROGRAM
void main()
{
 int c, emp;
 do
 {
  printf("\n\t---Select your choice---------\n");
  printf("\n\t1.INSERT_TEACHER_1\n\n\t2.INSERT_TEACHER_2\n\n\t3.INSERT_TEACHER_3\n\n\t4.INSERT_TEACHER_4\n\n\t5.INSERT_TEACHER_5\n\n\t6.INSERT_COURSE_mft\n\n\t7.INSERT_COURSE_ogi\n\n\t8.INSERT_SUBJECT\n");

  printf("\n\t9. EXIT");
  printf("\n\n------------------------------------------\n");
  printf("\nEnter your choice:");
  scanf("%d", &c);
  printf("\n");
  switch (c)
  {
  case 1:
   insert_teacher1();
   break;
   case 2:
   insert_teacher2();
   break;
   case 3:
   insert_teacher3();
   break;
   case 4:
   insert_teacher4();
   break;
   case 5:
   insert_teacher5();
   break;


   case 6:
       insert_course_mft();
   break;
   case 7:
       insert_course_ogi();
   break;
      case 8:
          insert_subject();
          break;




  case 9:
   exit(1);
   break;
  default:
   printf("\nYour choice is wrong\nPlease try again...\n");
   break;

  }
 } while (c != 9);


}
