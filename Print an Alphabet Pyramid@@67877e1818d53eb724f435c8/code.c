#include<stdio.h>
int main(){
    int a;
    scanf("%i",&a);
    for(int i=1;i<=a;i++){
        for(int j=0;j<a-i;j++){
            printf(" ");
        }
        for(int k =0;k<i;k++ )
        {putchar(65 + k);}

    }
}