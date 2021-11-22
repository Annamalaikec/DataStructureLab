#include<stdio.h>
int main()
{
    int n;
    printf("N :");
    scanf("%d",&n);
    int a[n],data;
    printf("Values : ");
    for(int i=0;i<n;i++)
    {
        
        scanf("%d",&a[i]);
    }
    printf("Value to be searched :");
    scanf("%d",&data);
    int first = 0;
    int last = n - 1,middle = (first+ last)/2;
    while (first<=last)
    {
        if(a[middle]<data)
        {
            first=middle+1;
        }
            else if(a[middle]==data)
            {
                printf("Found in  %d",middle+1);
                break;
            }
            else
                last=middle -1;
            middle =(first +last)/2;
        if (first>last)
        {
            printf("the value not found");
        }
    }
    return 0;
    
}

Output :
 N :4
Values : 4 5 6 7 
Value to be searched :7 
Found in  4



