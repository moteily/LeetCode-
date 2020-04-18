#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int isValid(char *s);
int main(int argc, char **argv)
{
    char *str;
    scanf("%s", str);
    int ret = isValid(str);
    //char *str = "()()";
    char *p = str;
    printf("括号是否匹配: %d \n", ret);
    return 0;
}
int isValid(char *s)
{
    int i = 0;
    char *p = s;
    char *base = (char *)malloc(sizeof(char)*30);//栈空间30
    char *top = base;
    //if(p[0]==')'||p[0]==']'||p[0]=='}')
    //  return false;
    while (p[i] != '\0')
    {
        if (top < base)
            return 0;
        if (p[i] == '(' || p[i] == '[' || p[i] == '{') //入栈
        {
            *top = p[i];
            top++;
        }
        else
        {
            if (p[i] == ')')
            {
                if ((top != base) && (*(top - 1) == '(')) //top！=base为了防止非法访问栈底再往下的数据
                    top = top - 1;                        //退栈
                else
                {
                    *top = p[i];
                    top++; //入栈
                }
            }
            else if (p[i] == ']')
            {
                if ((top != base) && *(top - 1) == '[')
                    top = top - 1; //退栈
                else
                {
                    *top = p[i];
                    top++; //入栈
                }
            }
            else
            {
                if ((top != base) && *(top - 1) == '{')
                    top = top - 1; //退栈
                else
                {
                    *top = p[i];
                    top++; //入栈
                }
            }
        }
        i++;
    }
    if (top == base)
        return 1;
    else
        return 0;
}
/*
int isValid(char * s){
    int num_small = 0,num_mid = 0,num_big = 0;
    char *p = s;
    int i = 0;
    int flag = 0;
    int last flag = 0;
    if(p[0]==')'||p[0]==']'||p[0]=='}')
        return 0;
    while(p[i]!= '\0')
    {
        if(p[i] == '(' )
        {
            num_small++;
            flag == 1; // ([)
        }
        else if(p[i] == ')')
        {
            if(flag == 1)
                num_small--;
            else
                return 0;
        }
        else if(p[i] == '[')
        {
            num_mid++;
            flag = 2;
        }
        else if(p[i] == ']')
        {
            if(flag == 2)
                num_mid--;
            else
                return 0;
        }
        else if(p[i] == '{')
        {
            num_big++;
            flag = 3;
        }
        else
        {
            if(flag == 3)
                num_big--;
            else
                return 0;
        }
        i++;
    }
    if((!num_big)&&(!num_mid)&&(!num_small))
        return 1;
    else
        return 0;
}
*/
