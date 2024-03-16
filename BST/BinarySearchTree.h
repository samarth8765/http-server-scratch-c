#ifndef BINARYSEARCHTREE_H
#define BINARYSEARCHTREE_H

#include "Node.h"

struct BinarySearchTree
{
    struct Node *head;

    /*
    Compare function
    If data1 > data2 return 1
    elif data1 < data2 return -1
    else return 0
    */
    int (*compare)(void *data_1, void *data_2);
    void *(*insert)(struct BinarySearchTree *tree, void *data);
    void *(*insert)(struct BinarySearchTree *tree, void *data);
};

struct BinarySearchTree binarySearchTreeConstructor(int (*compare)(void *data_1, void *data_2));

#endif