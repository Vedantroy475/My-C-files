#include <stdio.h>

say_hello();

int main() {	
    int i;

    for (i = 0; i < 5; i++) {
        say_hello();
    }
   
    return 0;
}

say_hello() {
    static int num_calls = 1;

    printf("Hello number %d\n", num_calls);
    num_calls++;
}
