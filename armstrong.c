#include<stdio.h>
#include<math.h>

int number_of_digits( int n)
{
    int c=0;
    while(n>0)
    {
        n=n/10;
        c++;
    }
    return c;
}

int digit_sum( int n )
{
    int a=0,c = number_of_digits(n);
    while(n>0)
    {
        a += pow(n%10,c);
        n=n/10;
    }
    return a;
}

int main()
{
    int n,i;
    printf("Enter n: ");
    scanf("%d",&n);
    printf("Armstrong numbers in the range [1,%d] : ",n);
    for(i=1;i<=n;i++)
    {
       if( digit_sum(i) == i ) printf("%d ",i);

    }

    return 0;
}
