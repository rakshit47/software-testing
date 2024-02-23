#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#define MAX 10

char Stack[MAX];
int TOP = -1;

void push(char Stack[], int *TOP, char info);
char pop(char Stack[], int *TOP);
char look(char Stack[], int *TOP);
void view(char Stack[], int *TOP);

int main()
{
    char Stack[MAX];
    int TOP = -1;
    char opt;
    while (1)
    {
        printf("[Push][Pop][View][Exit] \n");
        opt = getche();
        putchar("\n");
        switch (toupper(opt))
        {
        case 'P':
            printf("Enter Any Char");
            int chr = getche();
            push(*Stack, &TOP, chr);
            break;

        case 'O':
            printf("Charcter Poper: " + pop(*Stack, &TOP));
            break;

        case 'V':
            view(*Stack, &TOP);
            break;

        case 'E':
            printf("Invalid Entry");
            break;

        default:
            break;
        }
    }

    return 0;
}

void push(char Stack[], int *TOP, char info)
{
    // if (*TOP == MAX)
    //     return;
    // else
    // {
        (*TOP)++;
        Stack[*TOP] = info;
        printf("Pushed");
    // }
}

char pop(char Stack[], int *TOP)
{
    int info;
    if (*TOP == -1)
        return '?';
    else
    {
        info = Stack[*TOP];
        (*TOP)--;
        return info;
    }
}

// char look() { return Stack[TOP]; };

void view(char Stack[], int *TOP)
{
    int i;
    putchar("\n");
    for (i = *TOP; i >= 0; i--)
    {
        putchar(i);
    }
    putchar("\n");
}