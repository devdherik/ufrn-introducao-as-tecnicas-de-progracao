#include <stdio.h>
int main() {
    int age_in_days, years, months, days;

    scanf("%d", &age_in_days);

    years = age_in_days / 365;
    age_in_days %= 365;
    months = age_in_days / 30;
    days = age_in_days % 30;

    printf("%d ano(s)\n", years);
    printf("%d mes(es)\n", months);
    printf("%d dia(s)\n", days);

    return 0;
}