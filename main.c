#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

// Use https://cplusplus.com/reference/cstring/ strtok to partition string according to different whitespaces
// Use

typedef struct currency {
    int value;
    char *countryCode;
} Currency;

Currency currencyStructArray[100];

void cleanIndata()
{
    const int BUFFER_SIZE = 10000;
    FILE *infile = fopen("..\\valutor.txt", "r");
    if (infile == NULL)
    {
        printf("Error!");
        exit(0);
    }
    int numberOfCurrencies = 33;
    char buffer[BUFFER_SIZE];
    fread(buffer, sizeof(char), BUFFER_SIZE, infile);

    char *currency;
    currency = strtok(buffer, " \t\n");
    int counter = 0;
    int indexCounter = 0;

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
//    for (int i = 0; i < numberOfCurrencies; i++)
//    {
//        //behandla buffern strtok include string.h
//        //läsa ut valutans namn
//        //läsa ut valutans värde
//        char *currencyCountry;
//        currencyCountry = strtok(buffer, " \t\n");
//        char *currencyValue;
//        currencyValue = strtok(buffer, " \t\n");
//        if(currencyCountry != NULL)
//        {
//            currencyStructArray[i].countryCode = currencyCountry;
//        }
//        if(currencyValue != 0)
//        {
//            currencyStructArray[i].value = (int)currencyValue;
//        }
//        char *currency = strtok(buffer, " ,.\t\n");
//        char *currencyValue = strtok(buffer, " ,.\t\n");
//        currencyStructArray[i].countryCode = currency;
//        currencyStructArray[i].value = (int)currencyValue;

//    }
}




int main() {
    cleanIndata();
    int lengthOfStruct = sizeof(currencyStructArray) / sizeof(currencyStructArray[0]);
    for (int i = 0; i < lengthOfStruct; i++)
        if(currencyStructArray[i].countryCode != NULL)git
        printf("Country: %s Exchange rate: %d\n", currencyStructArray[i].countryCode, currencyStructArray[i].value);
    return 0;
}
