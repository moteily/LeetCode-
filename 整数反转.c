
#include <math.h>
#include <stdio.h>
int reverse(int x);
int main(int argc, char **argv)
{

    int x = 1563847412;
    int x_reverse = reverse(x);
    printf("x is %d,x_reverse is %d\n", x, x_reverse);
    return 0;
}

int reverse(int x)
{

    int arr[100] = {0};
    int i = 0;
    long long int sum = 0;
    int x1 = x;
    while (x1)
    {
        arr[i] = x1 % 10;
        x1 /= 10;
        i++;
    }
    int arr2[100] = {0};
    for (int j = 0; j < i; j++)
    {
        arr2[j] = arr[i - j - 1];
        //printf("arr2 %d\n",arr2[j]);
    }
    while (i--)
    {

        sum = sum + arr2[i] * pow(10, i);
        if (sum < -pow(2, 31) || sum >= pow(2, 31))
            return 0;
        //printf("%d %d %d\n",i,arr2[i],sum);
    }

    return sum;
}