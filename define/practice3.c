#include <stdio.h>

#define MAX(a,b) ((a) > (b) ? (a) : (b))
#define SET_BIT(b,n) ((b) |= (1 << (n)))
#define CLEAR_BIT(b,n) ((b) &= ~(1 << (n)))
#define TOGGLE_BIT(b,n) ((b) ^= (1 << (n)))+