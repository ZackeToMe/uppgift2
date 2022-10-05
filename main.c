#include <stdio.h>
#include <ctype.h>

typedef struct currency {
    int value;
    char *countryCode;
} Currency;

struct[] returnStructArray(char[] indata)
{
    Currency currencyStruct;
    int counter = 0;
    int valueTemp = 0;
    char *countryTemp;
    FILE *infile = fopen(indata, "r");
    while (!feof(infile))
    {
        character = fgetc(infile);
        if (counter == 3)
        {
            counter = 0;
        }
        if (isalpha(character))
        {
            countryTemp[counter] = character;
        }
        else
        {
            valueTemp = character;
            switch (counter)
            {
                case 0:
                    valueTemp = character*100;
            }
        }
        currencyStruct.countryCode = countryTemp;
    }
    fread()
}

int main() {
    printf("Hello, World!\n");
    return 0;
}
