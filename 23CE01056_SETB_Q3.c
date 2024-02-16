#include<stdio.h>
int main(){
    float x,y,r,x1,y1,sqdist,sqr;
     printf("ENTER COORDINATES OF CENTER OF CIRCLE:");
    scanf("%f%f",&x,&y);
    printf("\nENTER RADIUS OF CIRCLE: ");
    scanf("%f",&r);
    printf("\nENTER COORDINATES OF POINT YOU WANT TO CHECK:");
    scanf("%f%f",&x1,&y1);
    float yd,xd;
    yd=y1-y;
    xd=x1-x;
    sqr=r*r;
    sqdist=(yd*yd+xd*xd);
    // printf("%f\t%f",sqdist,sqr);
    if(sqdist==sqr) printf("THE GIVEN POINT LIE ON THE CIRCLE");
    if(sqdist<sqr) printf("THE GIVEN POINT LIE INSIDE THE CIRCLE");
    else printf("THE GIVEN POINT LIE OUTSIDE THE CIRCLE");
    return 0;


}