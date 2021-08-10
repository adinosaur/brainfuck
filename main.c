
#include "bf.h"

int main()
{
    // call first
    rpython_startup_code();
    
    // print `Hello World`
    bf_dostring((char*)"++++++++++[>+++++++>++++++++++>+++>+<<<<-]>++.>+.+++++++..+++.>++.<<+++++++++++++++.>.+++.------.--------.>+.>.");
    
    // dofile
    bf_dofile((char*)"./bench.bf");
    
    return 0;
}