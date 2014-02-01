#include<stdio.h>
void main()
{
int *a,*b,asize,bsize,i,j,k,x;
printf("enter the sizes of the arrays\n");
scanf("%d%d",&asize,&bsize);
a=(int *)malloc(sizeof(int)*asize);
b=(int *)malloc(sizeof(int)*bsize);
printf("enter array a in ascending order");
for(i=0;i<asize;i++)
scanf("%d",&a[i]);
printf("enter array b in ascending order");
for(i=0;i<bsize;i++)
scanf("%d",&b[i]);
i=0;
j=0;
k=0;
while(i<(asize+bsize)/2)
{
  if(a[j]<b[k])
  {
	x=a[j];
	j++;
  }
  else
  {
	x=b[j];
	k++;
  }
  i++;
}
if((asize+bsize)%2==0)
{
if(a[j]<b[k])
x+=a[j];
else
x+=b[k];
printf("%f",(float)x/2);
}
else
{
if(a[j]<b[k])
x=a[j];
else
x=b[k];
printf("%d",x);
}
}