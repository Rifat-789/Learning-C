#include <stdio.h> 
#include <string.h> 
union student { 
 char student_name[30]; 
 char student_id[30]; 
 char course_code[30]; 
 char course_name[100]; 
}; 
int main() { 
 union student u1; 
 strcpy(u1.student_name, "Rifat");
 printf("Student Name: %s\n", u1.student_name); 
 strcpy(u1.student_id, "CSE 085 08893");
 printf("Student Id: %s\n", u1.student_id); 
 strcpy(u1.course_code, "0613CSE124"); 
 printf("Course Code: %s\n", u1.course_code); 
 strcpy(u1.course_name, "SPL"); 
 printf("Course Name: %s\n", u1.course_name); 
 return 0; 
}
