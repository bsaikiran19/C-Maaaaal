#include <stdio.h>
#include <conio.h>
void addStudent();
void studentRecord();
void searchStudent();
void Delete();

struct student
{
     char first_name[20];
     char last_name[20];
     int roll_no;
     char Class[10];
     char Vill[20];
     float percentage;
};

int main()
{
     int choice = 0;
     while (choice != 5)
     {
          printf("\t\t\t=====STUDENT DATABASE MANAGEMENT SYSTEM=====");
          printf("\n\n\n\t\t\t 1. Add Student record \n");
          printf("\t\t\t 2. Student records \n");
          printf("\t\t\t 3. Search Student  \n");
          printf("\t\t\t 4. Delete record \n");
          printf("\t\t\t 5. Exit \n");
          printf("\t\t\t ______________________________________ \n");
          printf("\t\t\t   ");
          scanf("%d", &choice);

          switch (choice)
          {
          case 1:
               // system("clear");
               addStudent();
               // system("clear");
               break;
          case 2:
               // system("cls");
               studentRecord();
               printf("\t\t\t Press any key to exit..\n");
               getchar();
               // system("cls");
               break;
          case 3:
               // system("clear");
               searchStudent();
               printf("\t\t\t Press any key to exit..\n");
               getchar();
               // system("Clear");
               break;
          case 4:
               // system("clear");
               Delete();
               printf("\t\t\t Press any key to exit..\n");
               getchar();
               // system("Clear");
               break;
          case 5:

               // system("Clear");
               printf("\n\t\t\t\ Thank you for using this software\n\n");
               exit(0);
          default:
               // system("clear")
               getch();
               printf("\t\t\t\t enter a valid number");
               printf("Pres any key to continue.....\n");
          }
     }
     return 0;
}

void addStudent()
{
     char another;
     FILE *fp;
     struct student info;
     do
     {
          // system("clear");
          printf("\t\t\t\t======Add Student Info=====\n\n\n");
          fp = fopen("student_info", "a");
          printf("\n\t\tEnter the first name: ");
          scanf("%s", &info.first_name);
          printf("\n\t\tEnter the last name: ");
          scanf("%s", &info.last_name);
          printf("\n\t\tEnter the Roll Number : ");
          scanf("%d", &info.roll_no);
          printf("\n\t\tEnter the Class : ");
          scanf("%s", &info.Class);
          printf("\n\t\tEnter the Village: ");
          scanf("%s", &info.Vill);
          printf("\n\t\tEnter the percentage: ");
          scanf("%f", &info.percentage);
          printf("\n\t\t\t_____________________________\n");

          if (fp == NULL)
          {
               fprintf(stderr, "\t\t\tCannot open file ");
          }
          else
          {
               printf("\t\t\t Record stored successfully...!!!\n");
          }
          fwrite(&info, sizeof(struct student), 1, fp);
          fclose(fp);
          printf("\t\t\tDo you want to add another student ?? (y/n):");
          scanf("%s", &another);

     } while (another == 'y' || another == 'Y');
}

void studentRecord()
{
     FILE *fp;
     struct student info;
     fp = fopen("student_info", "r");

     printf("\t\t\t===== Student Records=====\n\n\n");
     if (fp == NULL)
     {
          fprintf(stderr, "\t\t\tCannot open file ");
     }
     else
     {
          printf("\t\t\tRecords\n");
          printf("\t\t\t________\n\n");
     }
     while (fread(&info, sizeof(struct student), 1, fp))
     {
          printf("\n\t\t\t Student Name : %s %s", info.first_name, info.last_name);
          printf("\n\t\t\t Roll Number  : %d", info.roll_no);
          printf("\n\t\t\t Class        : %s", info.Class);
          printf("\n\t\t\t Address      : %s", info.Vill);
          printf("\n\t\t\t Percentage   : %f", info.percentage);
          printf("\n\t\t\t_____________________________________\n");
     }
     fclose(fp);
     getchar();
}

void searchStudent()
{
     FILE *fp;
     struct student info;
     int rollno, found = 0;
     fp = fopen("student_info.txt", "r");
     printf("\t\t\t===== Search Student =====\n\n\n");
     printf("\t\t\t Enter the Roll number :");
     scanf("%d", &rollno);
     while (fread(&info, sizeof(struct student), 1, fp))
     {

          if (info.roll_no == rollno)
          {
               found = 1;
               printf("\n\t\t\t Student Name : %s %s", info.first_name, info.last_name);
               printf("\n\t\t\t Roll Number  : %d", info.roll_no);
               printf("\n\t\t\t Class        : %s", info.Class);
               printf("\n\t\t\t Address      : %s", info.Vill);
               printf("\n\t\t\t Percentage   : %f", info.percentage);
               printf("\n\t\t\t_____________________________________\n");
          }
     }
     if (!found)
     {
          printf("\n\t\t\tRecords Not found.!!!\n");
     }
     fclose(fp);
     getchar();
}

void Delete()
{
     FILE *fp, *fp1;
     struct student info;
     int rollno, found = 0;
     fp = fopen("student_info.txt", "r");
     fp1 = fopen("temp.txt", "w");
     printf("\t\t\t Enter the roll no :");
     scanf("%d", &rollno);
     if (fp == NULL)
     {
          fprintf(stderr, "\t\t\tCannot open file ");
     }
     while (fread(&info, sizeof(struct student), 1, fp))
     {

          if (info.roll_no == rollno)

          {
               found = 1;
          }
          else
          {
               fwrite(&info, sizeof(struct student), 1, fp1);
          }
     }
     fclose(fp);
     fclose(fp1);
     if (found)
     {
          remove("student_info.txt");
          rename("temp.txt", "student_info.txt");
          printf("\n\t\t\t Record Deleted Successfully \n");
     }
     if (!found)
     {
          printf("\n\t\t\t Record not found \n");
     }
     getchar();
}