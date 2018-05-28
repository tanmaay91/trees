#include "interface.h"

int main(){

tree t = createTree();
printf("3\n");
t = add(t,152);
t = add(t,168);
t = add(t,151);
t = add(t,159);
traverse(t); //to check code
t = deleteNode(t,152);
traverse(t); //to check if the tree has been suitably modified
}