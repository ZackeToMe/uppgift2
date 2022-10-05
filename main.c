#include <stdio.h>
#include <ctype.h>

typedef struct currency {
    int value;
    char *countryCode;
} Currency;

struct currency returnStruct(const char *indata)
{
    Currency currencyStruct;
    Currency *currencyStructArray;
    int indexCounter = 0;
    int counter = 0;
    char *valueTemp;
    char *countryTemp;
    FILE *infile = fopen(indata, "r");
    while (!feof(infile))
    {
        char ch = fgetc(infile);
        if (isalpha(ch))
        {
            countryTemp[counter] = ch;
            switch (counter)
            {
                case 0:
                    countryTemp[counter] = ch;
                    break;
                case 1:
                    countryTemp[counter] = ch;
                    break;
                case 2:
                    countryTemp[counter] = ch;
                    break;
            }
        }
        else if(isdigit(ch))
        {
            switch (counter)
            {
                case 0:
                    valueTemp[counter] = ch;
                    break;
                case 1:
                    valueTemp[counter] = ch;
                    break;
                case 2:
                    valueTemp[counter] = ch;
                    break;
            }
        }
        else
        {
            counter = 0;
            continue;
        }
        currencyStruct.countryCode = countryTemp;
        currencyStruct.value = (int)valueTemp;
        currencyStructArray[indexCounter] = currencyStruct;
        indexCounter++;
    }
    return *currencyStructArray;
}

int main() {
    Currency cSA = returnStruct("indata.txt");
    int lengthOfStruct = sizeof(cSA) / sizeof(cSA[0]);
    for (int i = 0; i < lengthOfStruct; i++)
        printf("Hello, World!\n");
    return 0;
}
