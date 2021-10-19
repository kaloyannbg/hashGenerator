#include <stdio.h>
#include <string.h>

#include "prot.h"
#define STR_LENGTH 50

int main()
{

    char str[][STR_LENGTH] = {"Vankata", "b123osa", "RabitZzA", "RomPetrol", "Codix", "CodeAcademy", "Kalata", "HasH", "NinoKvoStavaMan"};
    char out[50];

    int strLength = sizeof(str) / STR_LENGTH;
    int currentStrLen = 0;

    printf("\n\tString\t \t              Hash\n\n");

    for (int i = 0; i < strLength; i++)
    {
        currentStrLen = strlen(str[i]);

        setHash(str[i], out);
        printf("  -- %d  %s", i + 1, str[i]);
        for (int j = 0; j < 30-currentStrLen; j++)
        {
            printf(" ", j) ;
        }
        printf("%s\n", out);
    }
    putchar('\n');

    return 0;
}