#include<stdio.h>
int main()
{
    // WAP to convert days into years, months, and days

    int r_days,days, years, months;

    printf("Enter the number of days: ");
    scanf("%d", &r_days);

    years = r_days / 365;
    days = r_days % 365;
    months = days / 30;
    days = days % 30;

    printf("%d Days = %d Years %d Months %d Days\n",r_days,years,months,days);

    return 0;



}

