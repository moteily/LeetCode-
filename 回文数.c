
#include <math.h>
#include <stdio.h>
int isPalindrome(int x);
int main(int argc, char **argv)
{

    int x = isPalindrome(-9876789);
    printf("%d\n", x);
    return 0;
}
int isPalindrome(int x)
{
    if (x < 0)
        return 0;
    else
    {
        int a[100] = {0};
        int i = 0;
        while (x)
        {
            a[i] = x % 10;
            x = x / 10;
            i++;
        }

        int num = i;
        for (int i = 0; i < num && i < (num - i - 1); i++)
        {
            if (a[i] != a[num - i - 1])
                return 0;
        }
        return 1;
    }
}