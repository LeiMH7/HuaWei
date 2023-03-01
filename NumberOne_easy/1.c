#include <stdio.h>
#include <string.h>

int main()
{
    char str[5000];
    fgets(str,5000,stdin);

    int cont = 0;
    int k = strlen(str)-2; //不完美
    
    
    while(str[k] != ' ')
    {
        cont = cont +1;
        k=k-1;
    }
    printf("%d",cont);

    return 0;
}