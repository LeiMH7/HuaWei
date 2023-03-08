#include<stdio.h>
#include<string.h>

void BubbleSort();
int main()
{
    BubbleSort();
}

void BubbleSort()
{   
    int m; 
    int temp; //用于交换的中间变量
    scanf("%d",&m); //输入要交换的数组元素个数
    int a[m];

    for(int i=0;i<m;i++)
    {
        scanf("%d",&a[i]);
    }

    for(int i=0;i<m;i++)
    {
        for(int j=i+1;j<m;j++)
        {
            if(a[i]>a[j])
            {
                temp = a[i];
                a[i]=a[j];
                a[j]=temp;
            } 

        }
    } //从小到达排序

    for(int i=0;i<m;i++)
    {
        printf("%d\n",a[i]);
    }
}