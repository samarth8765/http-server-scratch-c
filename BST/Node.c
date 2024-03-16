#include "Node.h"
#include <stdlib.h>
#include <string.h>

struct Node node_constructor(void *data, unsigned long size)
{
    if (size < 1)
    {
        printf("Invalid size for data\n");
        exit(EXIT_FAILURE);
    }

    struct Node node;
    node.data = malloc(size);
    memcpy(node.data, data, size);

    node.left = NULL;
    node.right = NULL;

    return node;
}
