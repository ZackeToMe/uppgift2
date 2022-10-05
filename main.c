#include <stdio.h>
#include <ctype.h>

typedef struct currency {
    int value;
    char *countryCode;
} Currency;

struct returnStructArray(char[] indata)
{
    Currency currencyStruct;
    int counter = 0;
    int valueTemp = 0;
    char *countryTemp;
    FILE *infile = fopen(indata, "r");
    while (!feof(infile))
    {
        character = fgetc(infile);
        if (isalpha(character))
        {
            countryTemp[counter] = character;
            switch (counter)
            {
                case 0:
                    countryTemp[counter] = character;
                    break;
                case 1:
                    countryTemp[counter] = character;
                    break;
                case 2:
                    countryTemp[counter] = character;
                    break;
                case 3:
                    countryTemp[counter] = '\0';
                    counter = 0;

                    break;
            }
        }
        if else (isdigit(character))
        {
            valueTemp = character;
            switch (counter)
            {
                case 0:
                    valueTemp += character*100;
                    break;
                case 1:
                    valueTemp += character*10;
                    break;
                case 2:
                    valueTemp += character*1;
                    break;
                case 3:
                    counter = 0;
                    break;
            }
        }
        else
        {

        }
        currencyStruct.countryCode = countryTemp;
        currencyStruct.value = valueTemp;
    }
}

int main() {
    printf("Hello, World!\n");
    return 0;
}
