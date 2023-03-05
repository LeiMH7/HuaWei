#include <stdio.h>
#include<string.h>

int main()
{
    char string[500];
    fgets(string,500,stdin);

    int a[127]={0};
    //int temp;

    for(int i=0; i<strlen(string)-1;i++)
    {
        if(string[i]!=' ')
        {
            a[(int)string[i]] = (int)string[i];
            a[(int)string[i]]++;
        }
    }

    int cont;
    for(int i =0;i<127;i++)
    {
        if(a[i]!=0)
        {
            cont ++;
        }
    }

    printf("%d\n",cont);
    return 0;
}
