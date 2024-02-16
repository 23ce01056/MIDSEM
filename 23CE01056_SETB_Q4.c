#include<stdio.h>
int main(){
    int a;
    printf("ENTER A NUMBER :");
    scanf("%d",&a);
    int arr[a];
    for (int i=0;i<a;i++){
        arr[i]=0;
    } 

    int swas=0,bubun=0;

    for (int i=2;i<a;i++){
        bubun=0;
        for (int j=2;j<i;j++)
        if (i%j==0) {
            bubun=1;
        }
        if (bubun==1) {
            arr[swas]=i;
            swas++;
        }


         
    }
    int sw=0;
    for (int i=0;i<a;i++){
        if(arr[i]!=0) sw=1;
    }
    if (sw==1){
    for(int i=0;i<a;i++){
        for (int j=i+1;j<a;j++){
            if (arr[i]==a-arr[j]) {
                printf("%d %d\n",arr[i],arr[j]);
        }
        }
    }
    }
    if (sw==0) printf("NOT POSSIBLE");
    return 0;
}