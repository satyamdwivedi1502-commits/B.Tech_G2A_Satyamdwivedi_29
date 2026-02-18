#include<stdio.h>
int main(){
int m1,m2,m3,m4,m5,sum;
float percentage;
printf("Enter the marks of first subject:");
scanf("%d",&m1);
printf("\n Enter the marks of second subject:");
scanf("%d",&m2);
printf("\n Enter the marks of third subject:");
scanf("%d",&m3);
printf("\n Enter the marks of fouth subject:");
scanf("%d",&m4);
printf("\n Enter the marks of fifth subject:");
scanf("%d",&m5);

sum = m1+m2+m3+m4+m5;

percentage= sum/5;

printf("\nThe sum of the marks is:%d ",sum);

printf("\n The percentage is :%f",percentage);
    return 0;

}