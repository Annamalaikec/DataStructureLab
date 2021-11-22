#include<stdio.h>
void print(int a[],int n)
{
    int i;
    for (int i = 0; i<n ; i++)
    {
        printf(" %d ",a[i]);
    }
}
void bubble(int a[],int n)
{
    int i,j,temp;
    for(i = 0;i<n;i++)
    {
        for(j = i+1;j<n;j++)
        {
            if(a[j]<a[i])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}
void main()
{
    int i , j , temp;
    int a[5] = {10,34,45,2,1};
    int n = sizeof(a)/sizeof(a[0]);
    printf("before sorting \n");
    print(a,n);
    bubble(a,n);
    printf("\nafter\n");
    print(a,n);
}
 
Output :

before sorting
 10  34  45  2  1 
after
 1  2  10  34  45 