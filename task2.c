
#include <stdio.h>
#include <string.h>

int main()

{
    char a[100];
    scanf("%s", a);         
    int y = strlen(a);
    int found = 0;
    for (int i = y - 1; i >= 0; i--)
    {
        if (a[i] == '1')
        {
            printf("%d",y- i); 
            found = 1;
            break;
        }
    }

    if (!found)
    {
        printf("-1");
    }

    return 0;
}
