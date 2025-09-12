#include <stdio.h>

int main()
{
    int grade;
    
    printf("Enter your grade: ");
    scanf("%d", &grade);
    if(grade >75 & grade <100){
    printf("passed\n");
    } else if (grade >50 && grade <74){
        printf("failed\n");
    } else if (grade >0 && grade <50){
        printf("invalid");
    }

    return 0;
}

