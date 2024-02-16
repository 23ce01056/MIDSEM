#include<stdio.h>
int main(){
    int a,b;
    printf("ENTER LOWER LIMIT :");
    scanf("%d",&a);
    printf("\nENTER UPPER LIMIT :");
    scanf("%d",&b);
    int arr[b-a];
    int swas=0,factsum;
    printf("PERFECT NUMBERS ARE :");
    for (int i=a;i<=b;i++){
        factsum=0;
        for (int j=1;j<i;j++){
            
            if (i%j==0) factsum=factsum+j;
        }
        if(factsum==i) printf("%d\t",i);


    }
    return 0;

}