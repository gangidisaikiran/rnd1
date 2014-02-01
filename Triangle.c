#include<stdio.h>
#include<math.h>
float distance(float,float,float,float);
void main()
{
float ang1,ang2,ang3,max,dist1,dist2,dist3,a_x,a_y,b_x,b_y,c_x,c_y;
printf("enter coordinates:");
scanf("%f",&(a_x));
scanf("%f",&(a_y));
scanf("%f",&(b_x));
scanf("%f",&(b_y));
scanf("%f",&(c_x));
scanf("%f",&(c_y));
//printf("%f%f%f%f%f%f\n",a_x,a_y,b_x,b_y,c_x,c_y);
dist1=distance(a_x,a_y,b_x,b_y);
dist2=distance(a_x,a_y,c_x,c_y);
dist3=distance(c_x,c_y,b_x,b_y);
max=dist1>dist2?(dist1>dist3?dist1:dist3):dist2>dist3?dist2:dist3;
if(2*sqrt(max)>=(sqrt(dist1)+sqrt(dist2)+sqrt(dist3)))
    	printf("not triangle");
else
{
    if(sqrt(dist1)==sqrt(dist2)==sqrt(dist3))
    printf("equilateral triangle");
    else if(sqrt(dist1)==sqrt(dist2)||sqrt(dist2)==sqrt(dist3)||sqrt(dist3)==sqrt(dist1))
    printf("isosceles triange");
  
    else if(2*(max)==((dist1)+(dist2)+(dist3)))
		printf("right angled");
    else
        printf("scalene triangle");
   
}
}
float distance(float ax,float ay,float bx,float by)
{
return pow((ax-bx),2)+pow((ay-by),2);
}
