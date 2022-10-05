#include <stdio.h>
#include <ctype.h>

typedef struct currency {
    int value;
    char *countryCode;
} Currency;

struct returnStruct(const char *indata)
{
    Currency currencyStruct;
    Currency currencyStructArray[];
    indexCounter = 0;
    int counter = 0;
    char *valueTemp;
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
            }
        }
        if else (isdigit(character))
        {
            switch (counter)
            {
                case 0:
                    valueTemp[counter] = character;
                break;
                case 1:
                    valueTemp[counter] = character;
                break;
                case 2:
                    valueTemp[counter] = character;
                break;
            }
        }
        else
        {
            counter = 0;
            continue;
        }
        currencyStruct.countryCode = countryTemp;
        currencyStruct.value = int(valueTemp);
        currencyStructArray[indexCounter] = currencyStruct;
        indexCounter++;
    }
}

int main() {
    returnStruct("indata.txt");
    printf("Hello, World!\n");
    return 0;
}
