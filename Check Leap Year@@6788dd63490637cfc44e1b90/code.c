#include <stdio.h>
int main(){
    int a;
    scanf("%i",&a);
    if(a%4==0&&a%400==0){
        printf("Leap Year");
    }
    else if(a%100==0){
        printf("Not a Leap year")
    }
    else{
        printf("Not a Leap Year");
    }
    return 0;
}
