#include <stdio.h>
#define prod(a, b) a * b
#define prod2(a, b) ((a) * (b))
// side effects of macros
int main(){
    int x = 3, y = 4;
    printf("%d", prod2(x + 2, y - 1));
    return 0;
}
