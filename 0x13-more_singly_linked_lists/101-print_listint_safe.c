#include "lists.h"

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *slow;
	const listint_t *fast;
	const listint_t *ptr1;
	const listint_t *ptr2;
	int k =1, loop_found =0, i;

	slow = head;
	fast = head;
	 if(!head) return -1;

       while(slow && fast && fast->next){
		printf("[%p], %d\n", (void *)slow, slow->n);
		slow = slow->next;
           /*Moving fast pointer two steps at a time */
               fast = fast->next->next;
               if(slow == fast){
                       loop_found = 1;
                       break;
               }
       }
	if(loop_found){
       /* We have detected a loop */
       /*Let's count the number of nodes in this loop node */

               ptr1  = fast;
               while(ptr1 && ptr1->next != slow){
                       ptr1 = ptr1->next;
                       k++;
               }
       /* Now move the other pointer by K nodes */
               ptr2 = head;
               ptr1  = head;
               for(i=0; i<k; i++){
                       ptr2 = ptr2->next;
               }
       /* Now if we move ptr1 and ptr2 with same speed they will meet at start of loop */
               while(ptr1 != ptr2)
		{
                       ptr1  = ptr1->next;
                       ptr2 =  ptr2->next;
		}
}
	return (1);
}
