#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Computador dando oi
    string answer = get_string("Whats's your name?");
    printf("hello, %s\n", answer);
}