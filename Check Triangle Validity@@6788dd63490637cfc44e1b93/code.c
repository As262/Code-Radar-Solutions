#include <stdio.h>
#include<math.h>
int main(){
    int a,b,c;
    scanf("%i%i%i",&a,&b,&c);
    int x=(int)pow(a,2);
    int y = (int)pow(b,2)
    int z =(int)pow(c,2)
    if(x+y==z &&y+z==x&&x+z==y){
        printf("Valid");
    }
    else{
        printf("Invalid");
    }
    return 0;
}