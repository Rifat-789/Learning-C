#include <stdio.h> 
#include <string.h> 
struct Student { 
 char student_name[35]; 
 char student_id[50]; 
 char course_code[50]; 
 char course_name[50]; 
}; 
int main() { 
 struct Student s1; 
 strcpy(s1.student_name, "Rifat"); 
 strcpy(s1.student_id, "CSE 085 08893"); 
 strcpy(s1.course_code, "CSE 123"); 
 strcpy(s1.course_name, "Structured Programming Lanaguage"); 
 printf("Student Name: %s\n", s1.student_name);  printf("Student ID: %s\n", s1.student_id); 
 printf("Course Code: %s\n", s1.course_code); 
 printf("Student Course: %s\n", s1.course_name); 
 return 0; 
}
