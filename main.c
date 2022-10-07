#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct currency {
    int value;
    char *countryCode;
} Currency;

Currency currencyStructArray[100];

void cleanIndata()
{
    // Open file with exchange rates.
    // OBS! file path need to be updated to correct location in HDD
    FILE *infile = fopen("/home/esarandon/Documents/KYH - IoT/11. Programmering inbyggda system/uppgift2/valutor.txt", "r");

    // Return error if file can not be read
    if (infile == NULL)
    {
        printf("Error!");
        exit(0);
    }

    // Copy file information to a buffer
    const int BUFFER_SIZE = 10000;
    char buffer[BUFFER_SIZE];
    fread(buffer, sizeof(char), BUFFER_SIZE, infile);

    char *currency;
    currency = strtok(buffer, " \t\r\n");
    int counter = 0;
    int indexCounter = 0;

    //while loop to split information in country code and value
    while (currency != NULL)
    {
        if (counter % 2 == 0)
        {
            currencyStructArray[indexCounter].countryCode = currency;
        }
        else
        {
            currencyStructArray[indexCounter].value = atoi(currency);
            indexCounter++;
        }
        currency = strtok(NULL, " \t\r\n");
        counter++;
    }
}

int main() {
    cleanIndata();
    int lengthOfStruct = sizeof(currencyStructArray) / sizeof(currencyStructArray[0]);
    for (int i = 0; i < lengthOfStruct; i++)
        if(currencyStructArray[i].countryCode != NULL)
            printf("Country: %s Exchange rate: %d\n", currencyStructArray[i].countryCode, currencyStructArray[i].value);
    return 0;
}
