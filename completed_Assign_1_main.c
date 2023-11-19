// program 1
/* #include<stdio.h>
#include<stdlib.h>

int func1(int num1, int *ptr)
{
    int num2;
    int bits = 0;
    int temp = num1;
    
    // Count the number of bits
    while (temp > 0) {
        bits++;
        temp >>= 1;
    }
    num2 = bits;
    printf("%d\n", num2);

    while (num1 >= 0)
    {
        int deciValue = 0;
        for (int i = 0; i < num2; i++) {
            deciValue |= ((num1 >> i) & 1) << (num2 - 1 - i);
        }
        ptr[num1] = deciValue;
        num1--;
    }

    return num2;
}

int main()
{
    int num1, num2;
    printf("Enter a number: ");
    scanf("%d", &num1);

    int* ptr1 = malloc(sizeof(int) * (num1 + 1));

    num2 = func1(num1, ptr1);

    printf("The reversal bits are as follows:\n");

    for (int i = num1; i >= 0; i--) {
        printf("%d is ", i);
        for (int j = num2 - 1; j >= 0; j--) {
            printf("%d", (ptr1[i] >> j) & 1);
        }
        printf("  %d\n", ptr1[i]);
    }

    return 0;
}
*/

//program 2
#include<stdio.h>
#include<stdlib.h>

int func1(int num1, int *ptr)
{
    int num2;
    int bits = 0;
    int temp = num1;
    while (temp > 0) {
        bits++;
        temp >>= 1;
    }
    num2 = bits;
    while (num1 >= 0)
    {
        int deciValue = 0;
        for (int i = 0; i < num2; i++) {
            deciValue |= ((num1 >> i) & 1) << (num2 - 1 - i);
        }
        ptr[num1] = deciValue;
        num1--;
    }
    return num2;
    }

int main(void)
{
    int num1, num2;
    
    printf("Enter a number: ");
    scanf("%d", &num1);

    int* ptr1 = malloc(sizeof(int) * (num1 + 1));
    num2 = func1(num1, ptr1);
    if(num2<13){
        printf("The reversal bits are as follows:\n");
    for (int i = num1; i >= 0; i--)
    {
        printf("%d is ", i);
    
        for (int j = num2 - 1; j >= 0; j--)
        {
            printf("%d", (ptr1[i] >> j) & 1);
        }
        printf("  %d\n", ptr1[i]);
    }
    return 0;
    }
    else
    {
        printf("ERROR:Max limit is 4095 \n");
    }
}
/*
    with time
#include<stdio.h>
#include<stdlib.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>


void myFunction()
{
int func1(int num1, int *ptr)
{
    int num2;
    int bits = 0;
    int temp = num1;
    while (temp > 0) {
        bits++;
        temp >>= 1;
    }
    num2 = bits;
    while (num1 >= 0)
    {
        int deciValue = 0;
        for (int i = 0; i < num2; i++) {
            deciValue |= ((num1 >> i) & 1) << (num2 - 1 - i);
        }
        ptr[num1] = deciValue;
        num1--;
    }
    return num2;
    }

int main(void)
{
    int num1, num2;
    
    printf("Enter a number: ");
    scanf("%d", &num1);

    int* ptr1 = malloc(sizeof(int) * (num1 + 1));
    num2 = func1(num1, ptr1);
    if(num2<13){
        printf("The reversal bits are as follows:\n");
    for (int i = num1; i >= 0; i--)
    {
        printf("%d is ", i);
    
        for (int j = num2 - 1; j >= 0; j--)
        {
            printf("%d", (ptr1[i] >> j) & 1);
        }
        printf("  %d\n", ptr1[i]);
    }
    return 0;
    }
    else
    {
        printf("ERROR:Max limit is 4095 \n");
    }
}
}
int main() {
    // Record the start time
    clock_t start = clock();

    // Call the function you want to measure
    myFunction();

    // Record the end time
    clock_t end = clock();

    // Calculate the elapsed time in seconds
    double cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;

    // Print the result
    printf("Execution time: %f seconds\n", cpu_time_used);

    return 0;
}

*/
