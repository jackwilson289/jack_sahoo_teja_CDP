#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main ()
{
    bool cont = true;

    char command[50];
    while (cont)
    {
        printf(">>>  ");
        scanf("%s", command);

        if (!strcmp(command, "quit"))
        {
            cont = false;
        }
    }

    return 0;
}
