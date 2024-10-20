#include <stdio.h>
#include <conio.h>

void addstudent();
void studentrecord();
void searchstudent();
void delete();

struct student{
     char first_name[20];
     char last_name[20];
     int roll_no;
     char Class[10];
     char State[20];
     float per;
     
};

int main(){
     int choice;
     while(choice!=5){
          printf("\t\t\t ================STUDENT DATABASE KEEPER===============\t\t\t");
          printf("\n\n\n\t\t\t 1. Add Student Record \n");
           printf("\n\n\n\t\t\t 2. Student Records\n");
          printf("\n\n\n\t\t\t 3. Search Student Record\n");
          printf("\n\n\n\t\t\t 4. Delete Record\n");
          printf("\n\n\n\t\t\t 5. Exit \n");
          printf("\n\n\n\t\t\t_______________________________\n");
          printf("\t\t\t");
          scanf("%d",&choice);




          switch(choice){
               case 1:
                         //  clrscr();
                          addstudent();
                         // clrscr();
          }
     }



     return 0;
}



void addstudent(){
     char another;
     FILE *fp;
     struct student info;
     do{
          // clrscr();
          printf("\t\t\t=========ADD STUDENT INFORMATION=========\n");
          fp=fopen("student_info.txt","a");
          printf("\n\t\t\t Enter the First Name   : ");
          scanf("%s",&info.first_name);
          printf("\n\t\t\t Enter the last name    : ");
          scanf("%s",info.last_name);
          printf("\n\t\t\t Enter the roll number  :");
          scanf("%d",info.roll_no);
          printf("\n\t\t\t Class                  : ");
          scanf("%s",info.Class);
          printf("\n\t\t\t State                  : ");
          scanf("%s",info.State);
          printf("\n\t\t\t Percentage got         : ");
          scanf("%f",info.per);
          printf("\n\t\t\t____________________________)");
     if(fp==NULL){
               fprintf(stderr,"Cannot open file\n");
          }
          else{
               printf("\t\t\t Record saved successfully \n ");
          }
          fwrite(&info,sizeof(struct student),1,fp);
          fclose(fp);
          printf("\n\t\t\t Want to add another record of Student ? :(y/n)");
          scanf("%c",&another);

     }while(another=='y' || another=='Y');
}