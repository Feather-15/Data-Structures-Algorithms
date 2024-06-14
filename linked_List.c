#include <stdio.h>
#include <stdlib.h>

struct linked_list {
    int number;
    struct linked_list* next;
};

typedef struct linked_list ll_1;
typedef struct linked_list* ptrll;

int main() {
    // Allocate memory for the head node
    ptrll head_node = (ptrll) malloc(sizeof(ll_1));
    head_node -> number = 0;
    head_node -> next = NULL;

    ptrll new_node_1 = (ptrll) malloc (sizeof(ll_1));
    new_node_1 -> number = 1;
    new_node_1 -> next = NULL;

    head_node->next = new_node_1;

    // Create a node and link it to the next of new_node_1
    ptrll new_node_2 = (ptrll) malloc (sizeof(ll_1));
    new_node_2 -> number = 5;
    new_node_1 -> next = new_node_2;
    new_node_2 -> next = NULL;

    ptrll new_node_3 = (ptrll) malloc (sizeof(ll_1));
    new_node_3 -> number = 6;
    new_node_3 -> next = NULL;
    new_node_2 -> next = new_node_3;
    
    // | head : numb 0 |  ==> | new_node_1 :  num 1 |  ==>  | new_node_2 : number |  ==> | new_node_3 : numb 5 |  ==> NULL
    // |      :   next | /    |            :  next  | /     |            : next   | /    |            :  next  | /

    printf("Elements : %d, %d, %d\n", head_node->number, head_node->next->number, head_node->next->next -> number );
}