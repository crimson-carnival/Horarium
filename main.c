#include <stdio.h>

struct student {
    char name[];
    int credits;
    char code[];
};

struct subject {
    char name[];
    int credits;
    char code[];
};

int main() {
    int a;
    printf("Hello, World!\n");
    scanf("%d", &a);
    printf("%d\n", a*a);
    printf("This is just a test commit.\n");
    return 0;
}

