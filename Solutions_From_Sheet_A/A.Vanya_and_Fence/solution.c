
// Accepted	77 ms	100 KB

#include  <stdio.h>
int main()
{
    int n ; // numbers of freinds 
    int h ; // wall highte

    scanf("%d %d",&n,&h);

    int i = 0 ; // index to get freinds highte in arr
    int arr[n] ;
    while (i < n)
    {
        scanf("%d",&arr[i]);
        i++;
    }
    

    int check_highte = 0 ;
    int result = 0 ;

    while (check_highte < n) // while loop for check freinds highte
    {
        if (arr[check_highte] > h)
        {
            result += 2;
        }
        else if (arr[check_highte] <= h)
        {
            result += 1 ;
        }

        check_highte++;
    }
    printf("%d\n",result);

}