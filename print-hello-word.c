#include<stdio.h>
void main(){
    // first way by printf
    printf("Hello, World!");

    // secound way puts
    puts("Hello, World!");
    
    //third way by write
    write(1, "Hello, World!\n", 17);

    // charecter by charecter
    char *str = "Hello, World!\n";
    while (*str)
    {
        putchar(*str++);
    }
}

/* Hello, World!Hello, World!
Hello, World!
Hello, World!*/