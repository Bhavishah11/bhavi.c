#include <stdio.h>

int main()
{
    int year, days, day = 1, month, i, j;
    int leap;

    char *months[] = {
        "January", "February", "March", "April",
        "May", "June", "July", "August",
        "September", "October", "November", "December"
    };

    printf("Enter year: ");
    scanf("%d", &year);

    leap = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);

    int start = (year + year / 4 - year / 100 + year / 400) % 7;

    for(month = 0; month < 12; month++)
    {
        if(month == 1)
            days = leap ? 29 : 28;
        else if(month == 3 || month == 5 || month == 8 || month == 10)
            days = 30;
        else
            days = 31;

        printf("\n\n      %s %d\n", months[month], year);
        printf("Sun Mon Tue Wed Thu Fri Sat\n");

        for(i = 0; i < start; i++)
            printf("    ");

        for(j = 1; j <= days; j++)
        {
            printf("%3d ", j);

            if((j + start) % 7 == 0)
                printf("\n");
        }

        printf("\n");
        start = (start + days) % 7;
    }

    return 0;
}
