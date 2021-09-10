#include <stddef.h>
#include "ll_cycle.h"

int ll_has_cycle(node *head) {
    /* TODO: Implement ll_has_cycle */
	int cyclic = 1;
	int acyclic = 0;
	if (head == NULL) {
		return acyclic;
	}
	node *fast_ptr = head;
	node *slow_ptr = head;
	while (fast_ptr->next != NULL&& fast_ptr->next->next != NULL&& slow_ptr->next != NULL) {
		if (fast_ptr->next->next != NULL) {
			fast_ptr = fast_ptr->next->next;
		}
		if (slow_ptr->next != NULL) {
			slow_ptr = slow_ptr->next;
		}
		if (slow_ptr == fast_ptr) {
			return cyclic;
		}
		
	}
	return acyclic;

}
