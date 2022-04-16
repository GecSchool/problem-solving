#include <stdio.h>
#include <string.h>
#define SIZE 2000001
int front = -1, rear = -1;
void push(int queue[SIZE], int tmp)
{
    queue[++rear] = tmp;
    return;
}
void pop(int queue[SIZE])
{
    if (front != rear)
    {
        printf("%d\n", queue[++front]);
    }
    else
    {
        printf("-1\n");
    }
    return;
}
void size(int front, int rear)
{
    printf("%d\n", rear - front);
    return;
}
int empty(int front, int rear)
{
    if (front == rear)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void FRONT(int queue[SIZE], int front, int rear)
{
    if (empty(front, rear))
    {
        printf("-1\n");
    }
    else
    {
        printf("%d\n", queue[front + 1]);
    }
    return;
}
void back(int queue[SIZE], int front, int rear)
{
    if (empty(front, rear))
    {
        printf("-1\n");
    }
    else
    {
        printf("%d\n", queue[rear]);
    }
    return;
}
int main()
{
    int n;
    int queue[SIZE] = {
        0,
    };
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        char str[6] = {
            0,
        };
        scanf("%s", str);
        if (!strcmp(str, "push"))
        {
            int tmp;
            scanf("%d", &tmp);
            push(queue, tmp);
        }
        else if (!strcmp(str, "pop"))
        {
            pop(queue);
        }
        else if (!strcmp(str, "size"))
        {
            size(front, rear);
        }
        else if (!strcmp(str, "empty"))
        {
            printf("%d\n", empty(front, rear));
        }
        else if (!strcmp(str, "front"))
        {
            FRONT(queue, front, rear);
        }
        else if (!strcmp(str, "back"))
        {
            back(queue, front, rear);
        }
    }
    return 0;
}