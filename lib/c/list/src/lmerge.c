/*
** lmerge.c for  in /home/le-rou_c/lib/list/list
** 
** Made by Lucien Le Roux
** Login   <le-rou_c@epitech.net>
** 
** Started on  Fri Mar 24 09:02:08 2017 Lucien Le Roux
** Last update Mon Apr 10 14:26:29 2017 Lucien Le Roux
*/

#include "list.h"

/*
 * Merge two lists following the comparison function f
 * Assuming a and b are already sorted according to the function f
 * Returns a new ordered list
 */
t_list *lmerge(t_list *a, t_list *b, int (*f)(void *, void *)) {
  t_list *nh = lnode(NULL), *cur = nh;

  while (a != NULL && b != NULL) {
    if ((*f)(a->data, b->data) <= 0) {
      cur->next = a;
      a = a->next;
    } else {
      cur->next = b;
      b = b->next;
    }
    cur = cur->next;
  }
  cur->next = (a != NULL) ? a : b;
  cur = nh->next;
  free(nh);
  return cur;
}
