#include<stdio.h>
struct student{
char stdn[32];
int rno;
int marks;
};
int main(){
struct student s1={"sai",1016,96},s2;
int i;
scanf("%s",s2.stdn);
scanf("%d",&s2.rno);
scanf("%d",&s2.marks);
printf("%s\n%d\n%d",s1.stdn,s1.rno,s1.marks);
printf("\n\n");
printf("%s\n%d\n%d",s2.stdn,s2.rno,s2.marks);
}
