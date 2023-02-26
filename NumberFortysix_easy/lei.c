#include <stdio.h>

int main() {
    char string[1000];
    int a;

    fgets(string,1000,stdin);
    scanf("%d",&a);

    for(int i=0;i<a;i++)
    {
        printf("%c",string[i]);
    }

    printf("\n");
    return 0;
}