#include <stdio.h>
#include <string.h>

void removeChar(char *fromStr, char c);

int main()
{

    char str[50] = "AlaBalaNica";

    char c = 'a';

    removeChar(str, c);

    printf("%s", str);

    return 0;
}

void removeChar(char *fromStr, char c)
{

    int i = 0;

    int counterForNewStr = 0;

    while (fromStr[i] != '\0')
    {

        if (fromStr[i] != c)
        {
            fromStr[counterForNewStr] = fromStr[i];
            counterForNewStr++;
        }

        i++;
    }

    fromStr[counterForNewStr] = '\0';
}
