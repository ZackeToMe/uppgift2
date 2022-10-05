#include <stdio.h>
#include <ctype.h>

typedef struct currency {
    int value;
    char *countryCode;
} Currency;

Currency currencyStructArray[100];

void returnStruct()
{
    Currency currencyStruct;
    int indexCounter = 0;
    int counter = 0;
    char *valueTemp;
    char *countryTemp;
    FILE *infile = fopen("/home/esarandon/Documents/KYH - IoT/11. Programmering inbyggda system/uppgift2/valutor.txt", "r");
    while (!feof(infile)) // Re do using strtok function https://cplusplus.com/reference/cstring/strtok/
    {
        char ch = fgetc(infile);
        if (isalpha(ch))
        {
            countryTemp[counter] = ch;
            switch (counter)
            {
                case 0:
                    countryTemp[counter] = ch;
                    counter++;
                    continue;
                case 1:
                    countryTemp[counter] = ch;
                    counter++;
                    continue;
                case 2:
                    countryTemp[counter] = ch;
                    counter = 0;
                    currencyStructArray[indexCounter].countryCode = countryTemp;
                    continue;
            }
        }
        else if(isdigit(ch))
        {
            switch (counter)
            {
                case 0:
                    valueTemp[counter] = ch;
                    continue;
                case 1:
                    valueTemp[counter] = ch;
                    continue;
                case 2:
                    valueTemp[counter] = ch;
                    counter = 0;
                    currencyStructArray[indexCounter].value = (int)valueTemp;
                    continue;
            }
        }
        else if (counter != 0)
        {
            counter = 0;
            indexCounter++;
            continue;
        }
        else
        {
            counter = 0;
            continue;
        }
    }
}

int main() {
    returnStruct();
    int lengthOfStruct = sizeof(currencyStructArray) / sizeof(currencyStructArray[0]);
    for (int i = 0; i < lengthOfStruct; i++)
        printf("Country: %s\nExchange rate: %d", currencyStructArray[i].countryCode, currencyStructArray[i].countryCode);
    return 0;
}