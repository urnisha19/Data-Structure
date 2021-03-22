#include<stdio.h>
struct person
{
    char name;
    double CGPA;
    int batch;
};// p1,p2,p3;
int main()
{
    struct person p1,p2,p3; // if u write p1,p2,p3; above main() then this need not write
    scanf("%s %lf %d", &p1.name,&p1.CGPA,&p1.batch);
    scanf("%s %lf %d", &p2.name,&p2.CGPA,&p2.batch);
    scanf("%s %lf %d", &p3.name,&p3.CGPA,&p3.batch);
    double average=(p1.CGPA+p2.CGPA+p3.CGPA)/3;
    printf("Average = %.2lf",average);
    return 0;
}
