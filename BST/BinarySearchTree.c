#include "BinarySearchTree.h"

struct BinarySearchTree binarySearchTreeConstructor(int (*compare)(void *data_1, void *data_2))
{
    struct BinarySearchTree tree;
    tree.compare = compare;

    return tree;
}