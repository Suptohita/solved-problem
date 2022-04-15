/*
 Question: 
    A trapezoid is a quadrilateral with two parallel sides. The lengths of the two parallel sides are aa and bb and their distance is h.
    The area of such a trapezoid = (1\2)*(a+b)*h 
    Find the area of this trapezoid.

input:
    The input is given from Standard Input in the following format: 3, 4, 2 <-- (a=2, b=4, h=2)

output:
    7
*/



#include<stdio.h>

int main(){
    int a, b, h;
    int area;

    scanf("%d %d %d", &a, &b, &h);
    area = 0.5*(a+b)*h;
    printf("%d", area);
}


