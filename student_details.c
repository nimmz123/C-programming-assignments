#include <stdio.h>
int main (void) {
    char studentName[] = "Nithin";
    char studentSchool[] = "St Stephens School";
    int studentAge = 15;
    int studentMark = 85;
    int studentClass = 10;
    printf ("%s is %d years old\n", studentName, studentAge);
    printf ("%s is studying in %dth standard at %s\n", studentName, studentClass, studentSchool);
    printf ("%s got %d percent in last year final exam\n",studentName, studentMark);
    return 0;
}