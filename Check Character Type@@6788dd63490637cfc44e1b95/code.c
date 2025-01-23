#include <stdio.h>
#include<ctype.h>
int main() {
    char a;
    scanf("%c",&a);
    if(isalpha(a)){
    if(a=='a'||a=='e'||a=='o'||a=='i'||a=='u'||a=='A'||a=='E'||a=='O'||a=='U'||a=='I'){
        printf("Vowel");
    }
    else{
        printf("Consonant");
    }
    }
    else if(isdigit(a)){
        printf("Digit");
    }
    else{
        printf("Special Character");
    }
    return 0;
}