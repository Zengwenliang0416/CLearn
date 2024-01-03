//
//  practice-2-1.c
//  CLearn
//
//  Created by 曾文亮 on 2024/1/3.
//

#include "practice-2-1.h"
#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {
    // 打印 signed 类型的范围
    printf("Signed char min: %d\n", SCHAR_MIN);
    printf("Signed char max: %d\n", SCHAR_MAX);
    printf("Signed short min: %d\n", SHRT_MIN);
    printf("Signed short max: %d\n", SHRT_MAX);
    printf("Signed int min: %d\n", INT_MIN);
    printf("Signed int max: %d\n", INT_MAX);
    printf("Signed long min: %ld\n", LONG_MIN);
    printf("Signed long max: %ld\n", LONG_MAX);

    // 打印 unsigned 类型的范围
    printf("Unsigned char max: %u\n", UCHAR_MAX);
    printf("Unsigned short max: %u\n", USHRT_MAX);
    printf("Unsigned int max: %u\n", UINT_MAX);
    printf("Unsigned long max: %lu\n", ULONG_MAX);

    // 打印浮点类型的范围
    printf("Float min: %e\n", FLT_MIN);
    printf("Float max: %e\n", FLT_MAX);
    printf("Double min: %e\n", DBL_MIN);
    printf("Double max: %e\n", DBL_MAX);
    printf("Long double min: %Le\n", LDBL_MIN);
    printf("Long double max: %Le\n", LDBL_MAX);

    return 0;
}
