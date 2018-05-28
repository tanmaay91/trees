#include <stdio.h>
#include <stdlib.h>

typedef struct Tree *tree;

struct Tree{
int value : 10;
tree left;
tree right;
int hbi : 2;
};

int getRand();
tree newNode();
tree createNew();
tree add(tree t,int key);
tree find(tree t, int key);
tree findMinVal(tree t);
tree deleteNode(tree root, int key);