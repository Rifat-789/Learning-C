#include<stdio.h>

int main(){

    FILE *pFile = fopen("output2.txt", "w");   // To open a file

    if (pFile == NULL)
    {
        printf("Error openign file\n");
        return 1;
    }
    
    fputs("Hello all\n", pFile);
    fputs("This is another way to write in C\n", pFile);

    printf("File was written successfully");


    fclose(pFile);
    
    return 0;
}