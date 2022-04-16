#include <stdio.h>
#include <math.h>

#define NUM_DATA_BLOCK (256)

typedef struct data_block
{
    char data[NUM_DATA_BLOCK];
} data_block_t;

typedef struct inode_list
{
    bool file_type;
    int file_size;
    char file_creation_time[20];
    data_block_t *direct_pointer[8];
    data_block_t *indirect pointer;
} inode_list_t;

int main()
{
    ino
        printf("%d", sizeof())
}