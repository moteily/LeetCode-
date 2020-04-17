#include <stdio.h>
#include <string.h>
static char * longestCommonPrefix(char ** strs, int strsSize);
int main(int argc, char **argv)
{
    int strsSize = argc;
    char **strs = argv;
    char *str = longestCommonPrefix(strs,strsSize);
    printf("%d  %s\n",strsSize,str);
    return 0;
}
static char * longestCommonPrefix(char ** strs, int strsSize){

    int j = 0;
    static char ret[100];
    if(strsSize == 0)
        return "";
    else if(strs[0][j] == '\0')
        return "";
    for(int i = 1; i < strsSize; i++)
    {
        char std = strs[1][j];
        if(strs[i][j] == strs[1][j]&&strs[i][j]!='\0')
        {
            printf("i = %d\n",i);
            if(i == strsSize-1)
            {
                i = 1;
                j++;
                printf("j = %d\n",j);
            }
        }
        else
        {
            break;
        }
    }
     printf(" now j = %d\n",j);
    if(j)
    {
        for(int i = 0; i < j; i++)
        {
            ret[i] = strs[1][i];         
            printf("ret[i] =   %c \n",ret[i]);
        }
        ret[j] = '\0';
        return ret;
    }
    else
    {
        return "";
    }
}