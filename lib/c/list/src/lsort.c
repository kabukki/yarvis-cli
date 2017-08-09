/*
** lsort.c for  in /home/le-rou_c/lib/list/list
** 
** Made by Lucien Le Roux
** Login   <le-rou_c@epitech.net>
** 
** Started on  Thu Mar 23 21:53:30 2017 Lucien Le Roux
** Last update Fri Mar 24 11:43:38 2017 Lucien Le Roux
*/

#include "list.h"

/*
 * Bubble sort
 * O(n^2)
 */
static t_list *lbubble_sort(t_list *head, int (*f)(void *, void *)) {
  t_list *cur;
  bool sorted = false;
  size_t i, len = lsize(head);

  if (head == NULL)
    return ;
  for (i = 0; !sorted && i < len ; i++) {
    cur = head;
    while (cur->next != NULL) {
      sorted = true;
      while (cur->next) {
	if ((*f)(cur->data, cur->next->data) > 0) {
	  lswap(cur, cur->next);
	  sorted = false;
	}
	cur = cur->next;
      }
    }
  }
  return head;
}

/*
 * Merge sort
 * O(n log n)
 */
static t_list *lmerge_sort(t_list *head, int (*f)(void *, void *)) {
  t_list *mid, *right;

  if (head == NULL || head->next == NULL) // Base condition: list size < 2
    return head;
  mid = lat(head, lsize(head) / 2 - 1);
  right = mid->next;
  mid->next = NULL;
  return lmerge(lmerge_sort(head, f), lmerge_sort(right, f), f);
}

/*
 * Sorts the list
 * Returns the sorted list
 * Current implementation: merge sort
 */
t_list *lsort(t_list *head, int (*f)(void *, void *)) {
  return lmerge_sort(head, f);
}
