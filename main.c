#include "interface.h"

int main(){

tree t = createNew();
printf("1\n");
t = add(t,152);
inorder(t); //to check code
t = deleteNode(t,152);
inorder(t); //to check code

}