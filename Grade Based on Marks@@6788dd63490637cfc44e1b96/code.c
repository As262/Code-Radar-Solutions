#include <stdio.h>
int main(){
    int a;
    scanf("%i",&a);
    if(a>=90){
        printf("A");
    }
    else if(80<=a<90){
        printf("B");
    }
    else if(70<=a<80){
        printf("C");
    }
    else{
        printf("F");
    }
    return 0;
}