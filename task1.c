
#include <stdio.h>

int main()
{
    char a;

    scanf("%c",&a);
    if(a=='a' || a=='e' || a=='i' || a=='o' || a=='u')
    {
        printf("VOWELS");
    }
    else if(a=='A' || a=='E' || a=='I' || a=='O' || a=='U')
    {
        printf("VOWELS");
    }
    else 
    {
        printf("CONSENTS");
    }
}
