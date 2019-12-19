/*
Write a C program to input marks of five subjects Physics, Chemistry, Biology, Mathematics and Computer. Calculate percentage and grade according to following:
Percentage >= 90% : Grade A
Percentage >= 80% : Grade B
Percentage >= 70% : Grade C
Percentage >= 60% : Grade D
Percentage >= 40% : Grade E
Percentage < 40% : Grade F
*/

#include<stdio.h>

int main() {

    int phy, chem, bio, maths, comp;
    float percentage, total = 0;
    char grade;

    printf("Enter marks of Physics: ");
    scanf("%d", &phy);
    printf("Enter marks of Chemistry: ");
    scanf("%d", &chem);
    printf("Enter marks of Biology: ");
    scanf("%d", &bio);
    printf("Enter marks of Mathematics: ");
    scanf("%d", &maths);
    printf("Enter marks of Computer: ");
    scanf("%d", &comp);

    total = phy + chem + bio + maths + comp;
    percentage = total / 5.0;

    if (percentage >= 90) {
        grade = 'A';
    }
    else if (percentage >= 80) {
        grade = 'B';
    }
    else if (percentage >= 70) {
        grade = 'C';
    }
    else if (percentage >= 60) {
        grade = 'D';
    }
    else if (percentage >= 40) {
        grade = 'E';
    }
    else {
        grade = 'F';
    }
    printf("Your result is:\nPercentage: %.2f%%\nGrade: %c\n", percentage, grade);
    return 0;
}