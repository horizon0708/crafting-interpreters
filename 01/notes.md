https://www.geeksforgeeks.org/doubly-linked-list/

how to test
https://codeforwin.org/2017/08/introduction-c-programming.html


both stdio.h and stdlib.h are required to efined NULL
https://stackoverflow.com/questions/50379663/why-i-get-null-is-undefined-error


limits.h defines constants related to integer and character types. Such as minimum and maximum size range, total bits etc.

float.h defines constants related to floating point numbers. Such as precision, minimum and maximum size etc.

```c
/**
 * C program to get minimum and maximum range of a type using C library constants
 */
#include <stdio.h>
#include <limits.h>
#include <float.h>

int main()
{
    printf("Range of signed char %d to %d\n", SCHAR_MIN, SCHAR_MAX);
    printf("Range of unsigned char 0 to %d\n\n", UCHAR_MAX);

    printf("Range of signed short int %d to %d\n", SHRT_MIN, SHRT_MAX);
    printf("Range of unsigned short int 0 to %d\n\n", USHRT_MAX);

    printf("Range of signed int %d to %d\n", INT_MIN, INT_MAX);
    printf("Range of unsigned int 0 to %lu\n\n", UINT_MAX);

    printf("Range of signed long int %ld to %ld\n", LONG_MIN, LONG_MAX);
    printf("Range of unsigned long int 0 to %lu\n\n", ULONG_MAX);

    // In some compilers LLONG_MIN, LLONG_MAX
    printf("Range of signed long long int %lld to %lld\n", LONG_LONG_MIN, LONG_LONG_MAX); 
    // In some compilers ULLONG_MAX
    printf("Range of unsigned long long int 0 to %llu\n\n", ULONG_LONG_MAX); 

    printf("Range of float %e to %e\n", FLT_MIN, FLT_MAX);
    printf("Range of double %e to %e\n", DBL_MIN, DBL_MAX);
    printf("Range of long double %e to %e\n", LDBL_MIN, LDBL_MAX);

    return 0;
}
```