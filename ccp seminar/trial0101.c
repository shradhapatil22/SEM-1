#include <stdio.h>
#include <math.h>
void fun(int,int, double)
int main()
{
 
    int n = 100;
    int sq;
    double sq_root;
    fun(n, &sq, &sq_root);
    printf("%d %f\n", sq, sq_root);
    return 0;
}
void fun(int n, int* square, double* sq_root)
{
    *square = n * n;
    *sq_root = sqrt(n);
}
