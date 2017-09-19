#include <stdio.h>
#include <string.h>

struct student {
    char name[];
    char id[]; //College ID
};

struct subject {
    char name[];
    int credits;
    char code[]; //Subject Code
};

struct teachers {
    char id[];
    char name[];
    char subject_code[]; //Array of subjects
};

struct days {
    int hours_per_day;
    int num_of_days;
};

int main() {
    int a;
    printf("Hello, World!\n");
    scanf("%d", &a);
    printf("%d\n", a*a);
    printf("This is just a test commit.\n");
    return 0;
}

