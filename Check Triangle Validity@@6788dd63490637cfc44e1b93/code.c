#include <stdio.h>
#include<math.h>
int main(){
    int a,b,c;
    scanf("%i%i%i",&a,&b,&c);
    int x,y,z=(int)pow(a,2),pow(b,2),pow(c,2);
    if(x+y==z &&y+z==x&&x+z==y){
        printf("Valid");
    }
    else{
        printf("Invalid");
    }
    return 0;
}