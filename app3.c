#include <conio.h>
// #include <iostream>
#include <stdio.h>
int top = -1, size = 0;
char stack[100];
void push(char data)
{
    if (top == size - 1)
    {
        printf("Overflow");
    }
    else
    {
        stack[++top] = data;
    }
}
void pop()
{
    if (top == -1)
    {
        printf("Empty/Underflow");
        return;
    }
    --top;
}
void display()
{
    printf("\n");
    for (int i = 0; i <= top; i++)
    {
        printf("%c | ", stack[i]);
    }
}

int main()
{
    printf("Enter the size of the stack : ");
    scanf("%d", &size);
    char stack[size];
    while (1)
    {
        int ch;
        printf("\n\nSize : %d\nTop : %d\n1.Push\n2.Pop\n3.Display\n4.Exit : ", size, top);
        scanf("%d", &ch);
        if (ch == 1)
        {
            char data;
            printf("Enter data to be inserted : ");
            scanf("%s", &data);
            push(data);
        }
        else if (ch == 2)
        {
            pop();
        }
        else if (ch == 3)
        {
            display();
        }
        else if (ch == 4)
        {
            return 0;
        }
    }
}