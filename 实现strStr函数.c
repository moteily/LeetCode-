#include <stdio.h>
#include <stdlib.h>
int strStr(char *haystack, char *needle);
int main(int argc, char **argv)
{
    char *hay = "mississippi"; //i =5;j=4  -> j = 0;i =2
    char *need = "issi";
    int ret = strStr(hay, need);
    printf("%d\n", ret);
}
int strStr(char *haystack, char *needle)
{
    if (needle[0] == '\0')
        return 0;
    int i = 0, j = 0; //helto  lb
    while (haystack[i] != '\0')
    {

        if (needle[j] == haystack[i])
        {
            j++;
            i++;
        }
        else if (needle[j] != haystack[i])
        {
            if (j == 0)
                i++;
            else
            {

                i = i - j + 1;
                j = 0;
            }
        }
        if (needle[j] == '\0')
            return (i - j);
        printf("匹配过程:%d %d \n ", i, j);
    }
    return -1; //没匹配上
}
