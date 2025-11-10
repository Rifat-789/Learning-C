#include<stdio.h>

int main(){

    int rows = 0;
    int columns = 0;
    char symbols = '\0';

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("Enter the number of columns: ");
    scanf("%d", &columns);

    printf("Enter the symbol: ");
    scanf(" %c", &symbols);
    
    for(int i = 0; i < rows; i++){
        for (int i = 0; i < columns; i++){
            printf("%c", symbols);
    }
    printf("\n");

    }

    return 0;
}