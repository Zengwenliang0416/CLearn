//
//  range.c
//  CLearn
//
//  Created by 曾文亮 on 2024/1/3.
//
#include "stdio.h"
#include "range.h"
#include "limits.h"
#include "float.h"
#include "math.h"

/**
 使用标准库文件直接输出有符号和无符号的char、short、int、long变量类型的取值范围
 */
void printRange(void){
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
}

void computeRange(void){
    // 计算并打印 signed 类型的范围
    printf("Signed char min: %d\n", -(int)pow(2, sizeof(char) * 8 - 1));
    printf("Signed char max: %d\n", (int)pow(2, sizeof(char) * 8 - 1) - 1);
    printf("Signed short min: %d\n", -(int)pow(2, sizeof(short) * 8 - 1));
    printf("Signed short max: %d\n", (int)pow(2, sizeof(short) * 8 - 1) - 1);
    printf("Signed int min: %d\n", -(int)pow(2, sizeof(int) * 8 - 1));
    printf("Signed int max: %d\n", (int)pow(2, sizeof(int) * 8 - 1) - 1);
    printf("Signed long min: %ld\n", -(long)pow(2, sizeof(long) * 8 - 1));
    printf("Signed long max: %ld\n", (long)pow(2, sizeof(long) * 8 - 1) - 1);

    // 计算并打印 unsigned 类型的范围
    printf("Unsigned char max: %u\n", (unsigned char)pow(2, sizeof(char) * 8) - 1);
    printf("Unsigned short max: %u\n", (unsigned short)pow(2, sizeof(short) * 8) - 1);
    printf("Unsigned int max: %u\n", (unsigned int)pow(2, sizeof(int) * 8) - 1);
    printf("Unsigned long max: %lu\n", (unsigned long)pow(2, sizeof(long) * 8) - 1);

    // 计算 float 的最大值和最小正规范数值
    float float_max = (2 - pow(2, -23)) * pow(2, 127);
    float float_min = pow(2, -126);
    
    // 计算 double 的最大值和最小正规范数值
    double double_max = (2 - pow(2, -52)) * pow(2, 1023);
    double double_min = pow(2, -1022);
    
    printf("Float max: %e\n", float_max);
    printf("Float min (normalized): %e\n", float_min);
    printf("Double max: %e\n", double_max);
    printf("Double min (normalized): %e\n", double_min);
}
