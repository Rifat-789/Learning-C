#include <stdio.h>
#include <string.h>

int main(){

    char adjective1[50] = "";
    char noun[50] = "";
    char adjective2[50] = "";
    char verb[50] = "";
    char adjective3[50] ="";

    printf("Write an adjective (description): ");
    fgets(adjective1, sizeof(adjective1), stdin );
    adjective1[strlen(adjective1) - 1] = '\0';

    printf("Write a noun (person or animal): ");
    fgets(noun, sizeof(noun), stdin );
    noun[strlen(noun) - 1] = '\0';

    printf("Write an adjective (description): ");
    fgets(adjective2, sizeof(adjective2), stdin );
    adjective2[strlen(adjective2) - 1] = '\0';

    printf("Write a verb (end with -ing): ");
    fgets(verb, sizeof(verb), stdin );
    verb[strlen(verb) - 1] = '\0';

    printf("Write an adjective (description): ");
    fgets(adjective3, sizeof(adjective3), stdin );
    adjective3[strlen(adjective3) - 1] = '\0';

    printf("\n%s is a %s person\n", noun, adjective1 );
    printf("Yestarday I saw %s %s in the feild\n", noun, verb);
    printf("That was a bit %s and I was %s", adjective2, adjective3);

    return 0;
}