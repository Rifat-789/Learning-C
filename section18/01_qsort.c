#include<stdio.h>
#include<stdlib.h>

int compare(const void *a, const void *b){
    int x = *(int*)a;
    int y = *(int*)b;

    if(x > y){
        return 1;
    }

    if(x < y){
        return -1;
    }

    if(x == y){
        return 0;
    }
}

int main(){

    int arr[10];

    for (int i = 0; i < 10; i++){
        scanf("%d", &arr[i]);
    }

    qsort(arr, 10, sizeof(int), compare);

    printf("\n");

    for (int i = 0; i < 10; i++){
        printf("%d ", arr[i]);
    }



    return 0;

}