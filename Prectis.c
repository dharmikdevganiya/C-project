#include<stdio.h>

 main(){
int salary;
float HRA; float DA; float TA;

printf("Enter basa salary : ");
scanf("%d",&salary);


printf("Enter HTA : ");
scanf("%f",&HRA);

printf("Enter DA : ");
scanf("%f",&DA);

printf("Enter TA : ");
scanf("%f",&TA);

float cla =salary+((salary*HRA)/100)+((salary*DA)/100)+((salary*TA)/100);

printf("%f",cla);

 }
