/*
    Program that calculate your weekly pay
    the program should ask the user to enter the number of hours worked in a week
    the program should display as output the gross pay, the taxes an the net pay
    example:
        basic pay rate = $12.0/hr
        overtime(in excess of 40 hours) = time and a half
        tax rate:
            - 15% of the first $300
            - 20% of the next $150
            - 25% of the rest
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    double hoursWorked;
    double grossPay;
    double taxes;
    double netPay;

    double BASIC_HOURS_WORKED = 40;
    double BASIC_PAY_RATE = 12.00;
    double OVER_TIME_PAY = 18.00;

    double TAX_RATE_300 = 0.15;
    double TAX_RATE_150 = 0.20;
    double TAX_RATE_REST = 0.25;

    printf("How many hours do you worked this week:\n");
    scanf("%lf", &hoursWorked);

    double remainderHoursWorked;

    if (hoursWorked > BASIC_HOURS_WORKED)
    {
        remainderHoursWorked = hoursWorked - BASIC_HOURS_WORKED;
        grossPay = (BASIC_HOURS_WORKED * BASIC_PAY_RATE) + (remainderHoursWorked * OVER_TIME_PAY);
    }
    else
    {
        grossPay = hoursWorked * BASIC_PAY_RATE;
    }


    if (grossPay <= 300)
    {
        taxes = grossPay * TAX_RATE_300;
    }
    else if (grossPay > 300 && grossPay <= 450)
    {
       taxes = 300 * TAX_RATE_300;
       taxes += (grossPay - 300) * TAX_RATE_150;
    }
    else if (grossPay > 450)
    {
        taxes = 300 * TAX_RATE_300;
        taxes += 150 * TAX_RATE_150;
        taxes += (grossPay - 450) * TAX_RATE_REST;
    }
    
    netPay = grossPay - taxes;
    printf("Your Gross pay this week is: %.2lf\n", grossPay);
    printf("Your Taxes  this week is: %.2lf\n", taxes);
    printf("Your Net pay this week is: %.2lf\n", netPay);



    return 0;
}
