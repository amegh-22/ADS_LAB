#include<stdio.h>
int a[4],b[4],c[8];
void main(){
    printf("Enter the elements of both the arrays:\n");
    for(int i=0;i<8;i++){
        if(i<4){
            scanf("%d",&a[i]);
            c[2*i] = a[i];
        }
        else{
            scanf("%d",&b[i-4]);
            c[(2*i)-7] = b[i-4];
        }
    }
    printf("\nThe first array is: \n");
    for(int i=0;i<4;i++){
        printf("%d\t",a[i]);
    }
    printf("\nThe second array is: \n");
    for(int i=0;i<4;i++){
        printf("%d\t",b[i]);
    }
    printf("\nThe merged array is: \n");
    for(int i=0;i<8;i++){
        printf("%d\t",c[i]);
    }
}