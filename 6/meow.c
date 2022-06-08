#include <stdio.h>
#include <cs50.h>

//Protótipo
void meow(void);

int main(void)
{
    meow(3);
}

void meow(int n)
{
    for (int i = 0; i < n; i++)
    {
    print("meow\n");
    }
}