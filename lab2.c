
#include <stdio.h>
#include <locale.h>

void task1();
int minute_of_day(int N, int K);
int hours_to_midnight(int N, int K);
int minutes_to_midnight(int N, int K);
int seconds_from_8(int N, int K);
void task3();

int main() {
    int N = 2, K = 3;
    int minute, left_h, left_m, sec8;

    setlocale(LC_CTYPE, ".UTF8");

    task1();
    minute = minute_of_day(N, K);
    left_h = hours_to_midnight(N, K);
    left_m = minutes_to_midnight(N, K);
    sec8 = seconds_from_8(N, K);

    printf(" «Сейчас %d часов %d минут 00 секунд» \n", N, K);
    printf("«Идет %d минута суток» \n", minute);
    printf("«До полуночи осталось %d часов и %d минут» \n", left_h, left_m);
    printf("«С 8.00 прошло %d секунд» \n", sec8);
    printf("«Текущий час  = %.2f суток  и текущая минута = %.2f часа» \n", N / 24.0, K / 60.0);

    task3();
    return 0;
}

void task1()
{
    printf("123\n");
    printf("1\n2\n3\n");
    printf("1\n\t2\n\t\t3\t\n");
    printf("%2d\n%4d\n%6d\n%8d\n", 1, 2, 3, 4);
    printf("%10.3f\n", 12.234657);
    printf("%10.5f\n", 12.234657);
    printf("Остаток от деления %d на %d равен %d\n", 5, 2, 5 % 2);
    printf("%f\n", 7.0 / 5.0);
    printf("%d\n", 2000 * 4);
    printf("%g разделить %e равно %f\n", 5., 2000000., 5. / 2000000);
}

int minute_of_day(int N, int K)
{
    int minute;
    minute = N * 60 + K;
    return minute;
}

int hours_to_midnight(int N, int K)
{
    int h;
    h = (24 * 60 - (N * 60 + K)) / 60;
    return h;
}

int minutes_to_midnight(int N, int K)
{
    int m;
    m = (24 * 60 - (N * 60 + K)) % 60;
    return m;
}

int seconds_from_8(int N, int K)
{
    int sec;
    sec = ((N * 60 + K - 8 * 60 + 24 * 60) % (24 * 60)) * 60;
    return sec;
}

void task3()
{
    int n = 2, L = 335, k = 3, m = 1;
    printf("Дано:\n\t\t%3d\n\t\t___\n\t\t%03d\n\nОтвет:\n\t\t%+0*.*f\n", n, L, k + m + 2, m, (n * 1.0) / L);
}
