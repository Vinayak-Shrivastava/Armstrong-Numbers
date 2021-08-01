#include<stdio.h>
#include<math.h>

int number_of_digits( int n)   // to calculate number of digits
{
    int c=0;
    while(n>0)              //eliminates rightmost digits until the number becomes zero. The number of times this eleimination happens is equal to the number of digits
    {
        n=n/10;
        c++;
    }
    return c;           //return number of digits
}

int digit_sum( int n )
{
    int a=0,c = number_of_digits(n);
    while(n>0)
    {
        a += pow(n%10,c);                       // calculate sum of the nth powers of the digits of the number
        n=n/10;                                //eliminating rightmost digit so that the immidate left digit become rightmost for next turn and will be extracted
    }
    return a;                                //return the calculated sum
}

int main()
{
    int n,i;
    printf("Enter n: ");
    scanf("%d",&n);
    printf("Armstrong numbers in the range [1,%d] : ",n);
    for(i=1;i<=n;i++)
    {
       if( digit_sum(i) == i ) printf("%d ",i);                      // if the calculated sum is the number itself then the number is a Armstrong number and is thus printed.

    }

    return 0;                                                          
}
