#include <stdio.h>
int main() {
    char a;
    scanf("%c",&a);
    if(isaplha(a)){
    if(a=='a'||a=='e'||a=='o'||a=='i'||a=='u'||a=='A'||a=='E'||a=='O'||a=='U'||a=='I'){
        printf("Vowel");
    }
    else{
        printf("Consonant");
    }
    }
    else if(isdiigt(a)){
        printf("Digit");
    }
    else{
        printf("Special Charecter");
    }
    return 0;
}