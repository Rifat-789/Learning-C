#include<stdio.h>

int main(){

    FILE *pFile = fopen("C:\\Users\\USER\\Desktop\\output.txt", "w");   // To open a file

    char text[] = "This is my first file\nUsing C program";

    if (pFile == NULL)
    {
        printf("Error openign file\n");
        return 1;
    }
    
    fprintf(pFile, "%s", text);

    printf("File was written successfully");


    fclose(pFile);
    
    return 0;
}