#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    int stack_size;
    int top;
    int *stack;
} STACK;

void make_stack(STACK *stack)
{
    stack->stack = malloc(sizeof(int) * (stack->stack_size));
    return;
}
void push(STACK *stack, int value)
{
    if (stack->stack_size - 1 != stack->top)
    {
        stack->stack[++stack->top] = value;
        // stack->top += 1;
    }
    else
    {
        printf("error\n");
    }
    return;
}
int pop(STACK *stack)
{
    if (stack->top == -1)
    {
        printf("error\n");
        return 0;
    }
    else
    {
        return stack->stack[stack->top--];
    }
}
void top(STACK *stack)
{
    if (stack->top == -1)
    {
        printf("empty\n");
    }
    else
    {
        printf("%d\n", stack->stack[stack->top]);
    }
    return;
}
int empty(STACK *stack)
{
    if (stack->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    STACK stack;
    stack.top = -1;
    scanf("%d", &stack.stack_size);
    make_stack(&stack);
    push(&stack, 1);
    push(&stack, 14);
    if (!empty(&stack))
    {
        printf("%d\n", pop(&stack));
    }
    if (!empty(&stack))
    {
        printf("%d\n", pop(&stack));
    }
    return 0;
}