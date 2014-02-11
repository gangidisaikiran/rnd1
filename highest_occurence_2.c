#include<stdio.h>
#include<malloc.h>
void main()
{
//a is input array. b is the array of answers if there is more than one element with maximum count
int *a,*b,i,n,max,j,temp,temp1,maxcount=0,k;
printf("enter the size of array\n");
scanf("%d",&n);
a=(int*)malloc(sizeof(int)*n);
b=(int*)malloc(sizeof(int)*n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
{
    temp=0;
    if(a[i]!=-1)//if not previously counted element
    {
        temp1=a[i];
        for(j=0;j<n;j++)
            if(a[j]==temp1)
            {
                a[j]=-1;
                temp++;
            }
        if(maxcount<temp)//present element's count greater than previous count 
        {
            k=0;
            maxcount=temp;
            b[k++]=temp1;
        }
        else if(maxcount==temp)//present element's count equal to previous count
            b[k++]=temp1;
    }
}
for(i=0;i<k;i++)
printf("%d\t",b[i]);
}