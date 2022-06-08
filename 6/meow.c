#include <stdio.h>
#include <cs50.h>

//Protótipo
void (meow)void;

int main(void)
{
    for (int i = 0; i < 3; i++)
    {
        meow();
    }
}

void (meow)void
{
    print("meow\n");
}