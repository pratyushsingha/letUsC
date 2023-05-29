#include <stdio.h>
#include <string.h>

int main()
{
    char month[10];
    int date;
    printf("Enter your birthday month & date: ");
    scanf("%s %d", month, &date);

    if ((date >= 22 && strcmp(month, "december") == 0) || (date <= 19 && strcmp(month, "january") == 0))
    {
        printf("Your zodiac sign is Capricorn");
    }
    else if ((date >= 20 && strcmp(month, "january") == 0) || (date <= 17 && strcmp(month, "february") == 0))
    {
        printf("Your zodiac sign is Aquarius");
    }
    else if ((date >= 18 && strcmp(month, "february") == 0) || (date <= 19 && strcmp(month, "march") == 0))
    {
        printf("Your zodiac sign is Pisces");
    }
    else if ((date >= 20 && strcmp(month, "march") == 0) || (date <= 19 && strcmp(month, "april") == 0))
    {
        printf("Your zodiac sign is Aries");
    }
    else if ((date >= 20 && strcmp(month, "april") == 0) || (date <= 20 && strcmp(month, "may") == 0))
    {
        printf("Your zodiac sign is Taurus");
    }
    else if ((date >= 21 && strcmp(month, "may") == 0) || (date <= 20 && strcmp(month, "june") == 0))
    {
        printf("Your zodiac sign is Gemini");
    }
    else if ((date >= 21 && strcmp(month, "june") == 0) || (date <= 22 && strcmp(month, "july") == 0))
    {
        printf("Your zodiac sign is Cancer");
    }
    else if ((date >= 23 && strcmp(month, "july") == 0) || (date <= 22 && strcmp(month, "august") == 0))
    {
        printf("Your zodiac sign is Leo");
    }
    else if ((date >= 23 && strcmp(month, "august") == 0) || (date <= 22 && strcmp(month, "september") == 0))
    {
        printf("Your zodiac sign is Virgo");
    }
    else if ((date >= 23 && strcmp(month, "september") == 0) || (date <= 22 && strcmp(month, "october") == 0))
    {
        printf("Your zodiac sign is Libra");
    }
    else if ((date >= 23 && strcmp(month, "october") == 0) || (date <= 21 && strcmp(month, "november") == 0))
    {
        printf("Your zodiac sign is Scorpio");
    }
    else if ((date >= 22 && strcmp(month, "november") == 0) || (date <= 21 && strcmp(month, "december") == 0))
    {
        printf("Your zodiac sign is Sagittarius");
    }

    return 0;
}
// strcmp() is a function that compares two strings and returns 0 if they are equal.
// from library <string.h>