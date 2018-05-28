#include "interface.h"

int getRand(){

int x = (rand()%1000);

return x;
}

tree newNode(int key){

tree t = (tree)malloc(sizeof(struct Tree));
t->value=key;
t->left=NULL;
t->right=NULL;

return t;
}


tree add(tree t, int key){

if(t == NULL)
return newNode( key);

if(key < t->value)
t->left = add(t->left, key);

else if (key > t->value)
t->right = add(t->right, key);

return t;
}


tree createTree(){

tree root = newNode(getRand());
printf("%d\n",root->value);
int i;

for(i = 0; i < 9; i++){
tree new = newNode(getRand());
add(root,new->value);
printf("%d\n",new->value);
}
return root;
}

tree find(tree t, int key){

if(t==NULL || t->value == key)
return t;

if(key < t->left->value){
return find(t->left,key);
}

if(key > t->right->value){
return find(t->right,key);
}

}



tree findMinVal(tree t){

tree current = t;

while(t->left!=NULL){

current = current->left;

}

return current;
}





tree deleteNode(tree root, int key)
{
    if (root == NULL) return root;

printf("1\n");

    if (key < root->value)
        root->left = deleteNode(root->left, key);

    else if (key > root->value)
        root->right = deleteNode(root->right, key);

    else
    {
        if (root->left == NULL)
        {
            tree temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL)
        {
            tree temp = root->left;
            free(root);
            return temp;
        }

printf("1\n");

        tree temp = findMinVal(root->right);

        root->value = temp->value;

        root->right = deleteNode(root->right, temp->value);
    }
    return root;
}
void traverse(tree t){
if(t==NULL){
        return;
    }
    traverse(t->left);
    printf("%d\n",t->value);
    traverse(t->right);
}