/* This program adds two integer numbers */
#include <stdio.h>
int main()
{
    int a, b, sum;                    /* Deklarasi Variabel */
    printf("Enter first interger\n"); /* prompt the user */
    scanf("%d", &a);                  /* read first integer */
    printf("Enter second integer\n"); /* prompt the user */
    scanf("%d", &b);                  /* read second integer */
    sum = a + b;                      /* calculate the sum */
    printf("sum = %d\n", sum);        /* print the calculated sum */
    return 0;                         /* indicate that program ended successfully */
}