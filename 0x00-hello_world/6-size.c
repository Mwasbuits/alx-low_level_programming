#include <stdio.h>
#include <stdint.h>
int main(void)
{
printf("Size of int8_t: %zu byte(s)\n", sizeof(int8_t));
printf("Size of int16_t: %zu byte(s)\n", sizeof(int16_t));
printf("Size of int32_t: %zu byte(s)\n", sizeof(int32_t));
printf("Size of int64_t: %zu byte(s)\n", sizeof(int64_t));
printf("Size of float: %zu byte(s)\n", sizeof(float));
printf("Size of double: %zu byte(s)\n", sizeof(double));
printf("Size of long double: %zu byte(s)\n", sizeof(long double));
return (0);
}
