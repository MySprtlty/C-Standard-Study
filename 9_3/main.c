#include <stdio.h>
#include <stdlib.h>

#define MAX_STUDENT 10 /*최대 학생수*/

typedef struct subject
{
    int eng;
    int math;
    int sci;
}subject;

subject average(subject student[]);

int main()
{
    int i;

    subject student[MAX_STUDENT]=
    {
        {100,96,95},
        {97,100,80},
        {85,80,77},
        {73,75,88},
        {30,55,45},
        {24,25,38},
        {99,100,100},
        {22,30,57},
        {57,80,87},
        {98,46,47}
    };
    subject sum = average(student);
    printf("%d, %d, %d\n", sum.eng, sum.math, sum.sci);
    return 0;
}

subject average(subject student[])
{
    subject sum={0,};
    for(int i =0;i<MAX_STUDENT;i++)
    {
        sum.eng += student[i].eng;
        sum.math += student[i].math;
        sum.sci += student[i].sci;
    }
    sum.eng /= MAX_STUDENT;
    sum.math /= MAX_STUDENT;
    sum.sci /= MAX_STUDENT;
    return sum;
}

