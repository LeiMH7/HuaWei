#include <stdio.h>
#include <string.h>

int main()
{
    char str[1000];
    fgets(str,1000,stdin);
    
    char c;
    scanf("%c",&c);

    int cont = 0;

    for(int i =0;i<strlen(str);i++)
    {
        if(str[i] == c)
        {
            cont = cont+1;
        }
        else if ((int)c == (int)str[i]+32 ||(int)c == (int)str[i]-32) 
        {
            cont = cont +1;
        }
    }

    printf("%d",cont);
    printf("\n");
    
    return 0;
}