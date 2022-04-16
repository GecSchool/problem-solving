#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    int queue_size;
    int rear;
    int front;
    element *queue;
} QUEUE;
typedef int element;
void make_queue(QUEUE *queue)
{
    queue->queue = malloc(sizeof(int) * (queue->queue_size));
    return;
}
void reset_queue(QUEUE *queue)
{
    queue->front = 0;
    queue->rear = 0;
    queue->queue = malloc(sizeof(int) * (queue->queue_size));
    return;
}
int empty(QUEUE *queue)
{
    if (queue->front == queue->rear)
        return 1;
    else
        return 0;
}
int full(QUEUE *queue)
{
    if (((queue->rear + 1) % queue->queue_size) == queue->front)
        return 1;
    else
        return 0;
}
void push(QUEUE *queue, element data)
{
    if (full(queue))
    {
        return;
    }
    else
    {
        queue->rear = (queue->rear + 1) % queue->queue_size;
        queue->queue[queue->rear] = data;
        return;
    }
}
element pull(QUEUE *queue)
{
    if (empty(queue))
    {
        return NULL;
    }
    else
    {
        queue->front = (queue->front + 1) % queue->queue_size;
        return queue->queue[queue->front];
    }
}
element front(QUEUE *queue)
{
    if (empty(queue))
    {
        return NULL;
    }
    else
    {
        return queue->queue[queue->front];
    }
}
