#include <stdio.h>
int main() {
    char a;
    scanf("%c",&a);
    if(a=='a'||a=='e'||a=='o'||a=='i'||a=='u'||a=='A'||a=='E'||a=='O'||a=='U'||a=='I'){
        printf("Vowel");
    }
    else{
        printf("Consonant")
    }
    return 0;
}