/*
Determine odd even using bitwise & operator
<practicing CP book 2> <page-92>

Logic: binary of 1 is = 0000 0001
all even number's binary has 0 at the end
all odd number's binary has 1 at the end
so if i perform bitwise & between any number and 1 then

->for odd number the result will be binary of 1
->for even number the result will be binary of 0
*/

#include <stdio.h>
int main()
{

int n;
scanf("%d", &n);

if(n & 1){
    printf("%d is odd\n", n);
}else{
    printf("%d is even\n", n);
}

return 0;
}
