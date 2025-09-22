#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


long long solution(int a, int b) {
    long long n = (long long)(a > b ? a - b : b - a) + 1;
    long long sum = (long long)(a + b) * n / 2;          
    return sum;
}