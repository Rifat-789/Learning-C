#include<stdio.h>
#include<time.h>
#include<stdbool.h>
#include<unistd.h>

int main(){

    time_t rawtime = 0;   // 1 jan 1970 (Epoch)
    struct tm *pTime = NULL;
    bool isRunning = true;

    printf("DIGITAL CLOCK\n");

    while (isRunning)
    {
        time(&rawtime);

        pTime = localtime(&rawtime);

        printf("\r%02d:%02d:%02d", pTime->tm_hour, pTime->tm_min, pTime->tm_sec);  // Don't forget to dereferance the pointer
                                                                                   // \r for carriage return , helps to reprint in the same line
        sleep(1);
    }
    

    return 0;
}