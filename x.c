#include <stdio.h>

#pragma pack(8)
struct x
{
    int a;
    short b;
    char x;
    char y;
    char z;
    char z2;
    char z3;
};
#pragma pack()

int main(void)
{
    printf("sizeof (struct x) == %d\n", sizeof (struct x));
    return(0);
}