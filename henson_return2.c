#include<stdio.h>
#include<conio.h>

#define pi 3.1416

float diameter(float r);
float area(float r);
float circumference(float r);

int main()
{
  int choice;
  float radius, a, c, d;
  printf("Enter radius of circle: ");
  scanf("%f", &radius);
  printf("Choose an option:");
  printf("\n[1] Diameter\n[2] Area\n[3] Circumference");
  printf("\n\nEnter choice: ");
  scanf("%d",&choice);
  switch(choice)
  {
    case 1: d = diameter(radius);
                 printf("\nThe diameter is %.2f",d);
                 break;
    case 2: a = area(radius);
                 printf("\nThe area is %.2f",a);
                 break;
    case 3: c = circumference(radius);
                 printf("\nThe circumference is %.2f",c);
                 break;
    default: printf("\nInvalid input.");
  }
  getch();
}

float diameter(float r){
	return (2*r);
}

float area(float r){
	return (pi*(r*r));
}

float circumference(float r){
	return ((2*pi)*r);
}