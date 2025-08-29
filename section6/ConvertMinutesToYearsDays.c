// aks for minutes from console 
// convert those minutes to years and days

#include <stdio.h>

int MINUTES_IN_HOUR = 60;
int HOURS_IN_DAY = 24;
int DAYS_IN_YEAR = 365;

int main(int argc, char const *argv[])
{
    int minutesInYear =  MINUTES_IN_HOUR * HOURS_IN_DAY * DAYS_IN_YEAR;
    int minutesInDay = MINUTES_IN_HOUR * HOURS_IN_DAY;
    double minutesFromUser;
    double years;
    double days;

    printf("Please enter the number of minutes:\n");
    scanf("%lf",&minutesFromUser);

    years = minutesFromUser / minutesInYear;
    printf("%lf Years from %.2lf minutes\n", years, minutesFromUser);

    days = minutesFromUser / minutesInDay;

    printf("%lf days from %.2lf minutes ", days, minutesFromUser);

    return 0;
}

