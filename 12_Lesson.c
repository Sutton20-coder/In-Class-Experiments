/*
Sum the grades of students.
*/
#include <stdio.h>


double getGrade(int student_number);

double sumStudentGrades(int n_students);

double sumStudentGradesSentinel(void);

int main (void){
    

    double total = sumStudentGradesSentinel();
    printf("%lf\n", total);









    return 0;
}





double getGrade(int student_number){
    double grade;
    printf("Please enter the grade for student %d: ", student_number);
    scanf("%lf", &grade);
    return grade;
}



double sumStudentGrades(int n_students){
    int current_student = 1;
    double total = 0;

    while(current_student == n_students){
        double grade = getGrade(current_student);

        total += grade;

        current_student++;

        return total;
    }
}


double sumStudentGradesSentinel(void){

    double total = 0;
    double grade = 0;
    int current_student = 1;
    while (grade != -1){
        grade = getGrade(current_student);
        total += grade;
        current_student++;
    }


    return total + 1;
}
