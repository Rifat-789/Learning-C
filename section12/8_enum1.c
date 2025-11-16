#include<stdio.h>

typedef enum{
    SUCCESS, FAILURE, PENDING
} Status;
void connectStatus(Status status);


int main(){

    Status status = PENDING;

    connectStatus(status);


    return 0;
}

void connectStatus(Status status){

    switch (status)
    {
    case SUCCESS:
        printf("The connection was successfull\n");
        break;
    case FAILURE:
        printf("Could not connect\n");
        break;
    case PENDING:
        printf("connecting....\n");
        break;

    }
}