#include<stdio.h>
#include<math.h>
int main (){
    float r,h,vol,sa;
    printf("ENTER RADIUS OF CYLINDER:");
    scanf("%f",&r);
    printf("\nENTER HEIGHT OF CYLINDER: ");
    scanf("%f",&h);

    vol=3.14*r*r*h;
    sa=(2*3.14*r*(r+h));
    printf("VOLUME OF GIVEN CYLINDER IS %.2f AND SURFACE AREA IS %.2f",vol,sa);
    return 0;

}