#include<stdlib.h>
#include<stdio.h>

int compare(const void*a,const void*b)
{
    return *(int*)a-*(int*)b;
}
int main()
{
    int a[10];
    int i;
    for(i=0;i<10;i++)
        a[i]=10-i;

    qsort(a,10,sizeof(int),compare);

    for(i=0;i<10;i++)
        printf("%d ",a[i]);
    return 0;
}
