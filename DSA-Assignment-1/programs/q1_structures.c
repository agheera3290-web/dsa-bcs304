#include <stdio.h>
#include <stdlib.h>
struct Node { int data; struct Node *next; };
struct TNode { int data; struct TNode *left, *right; };
int main() {
    /* ARRAY */
    int a[3] = {10, 20, 30};
    printf("array: %d %d %d\n", a[0], a[1], a[2]);

    /* STACK */
    int st[5], top = -1;
    st[++top] = 10;                      /* push 10 */
    st[++top] = 20;                      /* push 20 */
    printf("stack pop: %d\n", st[top--]);/* pop -> 20 (LIFO) */

    /* QUEUE */
    int q[5], front = 0, rear = -1;
    q[++rear] = 10;                      /* enqueue 10 */
    q[++rear] = 20;                      /* enqueue 20 */
    printf("queue dequeue: %d\n", q[front++]);   /* -> 10 (FIFO) */

    /* LINKED LIST */
    struct Node *head = malloc(sizeof(struct Node));
    head->data = 10;
    head->next = malloc(sizeof(struct Node));
    head->next->data = 20;
    head->next->next = NULL;
    printf("linked list: %d %d\n", head->data, head->next->data);

    /* TREE */
    struct TNode *root = malloc(sizeof(struct TNode));
    root->data = 1;
    root->left = malloc(sizeof(struct TNode));
    root->left->data = 2;
    root->right = malloc(sizeof(struct TNode));
    root->right->data = 3;
    root->left->left = root->left->right = NULL;
    root->right->left = root->right->right = NULL;
    printf("tree: root %d, children %d and %d\n", root->data, root->left->data, root->right->data);

    /* GRAPH (adjacency matrix, 4 vertices) */
    int adj[4][4] = {{0,1,0,1},{1,0,1,0},{0,1,0,1},{1,0,1,0}};
    printf("graph edge 0-1: %d, edge 0-2: %d\n", adj[0][1], adj[0][2]);
    return 0;
}
