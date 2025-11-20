#include<stdio.h>

int main(){

    FILE *pFile = fopen("C:\\Users\\USER\\Desktop\\input.txt", "r");
    char buffer[1024] = {0};

    if (pFile == NULL)    // if the function doesn't work it returns NULL
    {
        printf("Could not open the file");
        return 1;
    }

    while (fgets(buffer, sizeof(buffer), pFile) != NULL)
    {
        printf("%s", buffer);
    }
    

    fclose(pFile);

    return 0;
}