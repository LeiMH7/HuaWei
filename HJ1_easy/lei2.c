#include <stdio.h>
#include <string.h>

int main()
{
    char str[5000];
    fgets(str,5000,stdin);

    int cont = 0;
    int k = strlen(str)-1; //去掉末尾的/0的长度。k为实际字符串长度

    while(str[k-1]!=' '&&k>0)
    {
        cont = cont + 1;
        k = k-1;
    }
 printf("%d\n",cont);

    return 0;
}