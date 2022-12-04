//Ilke D.   02/12/2022

#include <stdio.h>

float circle(float r) //r as radius
{
	float pi=3.14,area=0;
	area=pi*r;
	return area;
}


float square(float a) //a as one side of square
{
	float area=a*a;
	return area;
}


float rectangle(float a,float b) //a and b are the sides of rectangle
{
	float area=a*b;
	return area;	
}


float triangle(float h,float f) //h as height and f as floor
{
	float area=(h*f)/2;
	return area;
}


float house(float a,float h,float f) //a as one side of the square, h as height of triangle, f as floor of triangle
{
	float area=square(a)+triangle(h,f);
	return area;
}






int main()
{
	char type;
	float area;
	
do
{

	printf("'S' or 's' for square, 'R' or 'r' for rectangle, 'C' or 'c' for circle, 'T' or 't' for triangle, 'h' or 'H' for house");
	printf("\nEnter shape: (s,S,h,H,T,t,c,C,r,R)\n");
	scanf(" %c",&type);
	
	switch (type)
	{
		case 'c':
		case 'C':
			float r;
			printf("Enter radius:");
			scanf("%f",&r);
			area=circle(r);
			printf("\nArea of the circle=%.2f\n",area);
			break;
			
			
		case 's':
		case 'S':
			float a;
			printf("Enter one side of the square");
			scanf("%f",&a);
			area=square(a);
			printf("\nArea of the square=%.2f\n",area);
			break;
			
			
		case 'R':
		case 'r':
			float w,l;
			printf("Enter the first width of rectangle:");
			scanf("%f",&w);
			printf("\nEnter the second length of rectangle:");
			scanf("%f",&l);
			area=rectangle(w,l);
			printf("\nArea of the rectangle=%.2f\n",area);
			break;
			
			
		case 'T':
		case 't':
			float h,f;
			printf("Enter the height of the triangle:");
			scanf("%f",&h);
			printf("Enter the floor of the triangle:");
			scanf("%f",&f);
			area=triangle(h,f);
			printf("Area of the triangle=%.2f\n",area);
			break;
			
			
		case 'h':
		case 'H':
			float height,floor,side;
			printf("Enter the height of the triangle:");
			scanf("%f",&height);
			printf("Enter the floor of the triangle:");
			scanf("%f",&floor);
			printf("Enter width of the Square:");
			scanf("%f",&side);
			area=house(side,height,floor);
			printf("Area of the house=%.2f\n",area);
			break;
			
			
		case 'x':
		case 'X':
			printf("Exiting this app....\n");
			break;
			
			
		default:
			printf("\nWrong Input!!!\n");
	}
}
while(type!='x' && type!='X');
return 0;
}

