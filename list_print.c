#include "list.h"

void list_print(list* l) {
    node* q = l->first;
    while (q->next != NULL) {
        printf(q->val + " | ");
        q = q->next;
    }
}