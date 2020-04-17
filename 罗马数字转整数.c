#include <stdio.h>
#include <string.h>
#include <math.h>
int romanToInt(char *s);
/*
I 可以放在 V (5) 和 X (10) 的左边，来表示 4 和 9。
X 可以放在 L (50) 和 C (100) 的左边，来表示 40 和 90。 
C 可以放在 D (500) 和 M (1000) 的左边，来表示 400 和 900。
*/
int main(int argc,char **argv){

    char *x = argv[1];
    int ret = romanToInt(x);
    printf("%s %d\n",x,ret);
   // int ret = romanToInt();
}
int romanToInt(char * s){
    char *p = s;
    int sum = 0;
    int num = 0;
    int i = 0;
    while(p[i]!='\0')
    {
        if(p[i] =='I')
        {
            if(p[i+1] == 'V')
            {
                num = 4;
                i = i + 2;
            }
            else if(p[i+1] == 'X')
            {
                num = 9;
                i = i + 2;
            }
            else 
            {
                num = 1;
                i = i + 1;
            }
            
        }
        else if (p[i] == 'X')
        {
            if(p[i+1] == 'L')
            {
                num = 40;
                i = i + 2;
            }
            else if(p[i+1] == 'C')
            {
                num = 90;
                i = i + 2;
            }
            else 
            {
                num = 10;
                i = i + 1;
            }
        }
        else if (p[i] == 'C')
        {
            if(p[i+1] == 'D')
            {
                num = 400;
                i = i + 2;
            }
            else if(p[i+1] == 'M')
            {
                num = 900;
                i = i + 2;
            }
            else 
            {
                num = 100;
                i = i + 1;
            }

        }
        else if (p[i] == 'V')
        {
            num = 5;
            i = i + 1;
        }
        else if (p[i] == 'L')
        {
            num = 50;
            i = i + 1;
        }
        else if (p[i] == 'D')
        {
            num = 500;
            i = i + 1;
        }
        else if (p[i] == 'M')
        {
            num = 1000;
            i = i + 1;
        }
        else
            return 0;
        sum = sum + num;
    }
    return sum;
}