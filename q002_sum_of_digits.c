// Sum of the digits of the numbers n.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int sum =0,dgt,n;
    scanf("%d", &n);
    //Complete the code to calculate the sum of the five digits on n.
    while (n != 0) {
    dgt = n %10;
    n /= 10;
    sum +=dgt;
    }
    printf("%d",sum);
    return 0;
}