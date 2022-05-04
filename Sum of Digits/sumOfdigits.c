#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n;
    int temp1;
    int temp2;
    int temp3;
    int temp4;
    int temp5;
    scanf("%d", &n);
    temp1 = n % 10;
    temp2 = n % 100;
    temp2 = temp2 / 10;
    temp3 = n % 1000;
    temp3 = temp3 / 100;
    temp4 = n % 10000;
    temp4 = temp4 / 1000;
    temp5 = n % 100000;
    temp5 = temp5 / 10000;
    n = temp1 + temp2 + temp3 + temp4 + temp5;
    printf("%d",n);

    return 0;
}