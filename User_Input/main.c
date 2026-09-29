#include <stdio.h>
#include <string.h>
//User Input

int main(){

int age = 0;
float gpa = 0.0f;
char grade = '\0';
char name[30] = "";

//printf("%d\n",age);
//printf("%f\n",gpa);
//printf("%c\n",grade);
//printf("%s\n",name);

printf("Enter you age :");
scanf("%d", &age);

printf("Enter you gpa :");
scanf(" %f", &gpa);

printf("Enter you grade :");
scanf(" %c", &grade);

getchar();
printf("Enter your full name:");
fgets(name, sizeof(name), stdin);
name[strlen(name) -1] = '\0';

printf("Your name is %s\n", name);
printf("Your age is %d\n",age);
printf("Your age is %f\n",gpa);
printf("Your grade is %c\n",grade);




    return 0;
}