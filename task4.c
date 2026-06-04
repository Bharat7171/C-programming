
/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a,sum;
    scanf("%d %d",&a,&sum);
    int ar[a];
    for(int i=0;i<a;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(int i=0;i<a;i++)
    
    {
        for(int j=i+1;j<a;j++)
        {
            if(sum==ar[i]+ar[j])
            {
                printf("%d %d",ar[i],ar[j]);
                    return 0;
                    }
        }
    }

    return 0;
}
