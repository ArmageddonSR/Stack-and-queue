#include<stdio.h>
#include<stdlib.h>  

struct Node
{
    int data;
    struct Node *nextptr;
};
typedef struct Node node;
typedef struct Node* Nodeptr;
Nodeptr top = NULL;

int main(int argc, char* argv[])
{   
     return 0;
}

void Push(Nodeptr *top, int x)
{
    node* newNode = (Nodeptr)malloc((sizeof(node)));
}
