#ifndef NODE_H
#define NODE_H

struct Node
{
    void *data;
    struct Node *left;
    struct Node *right;
};

struct Node node_constructor(void *data, unsigned long size);

void destructor(struct Node *node);

#endif