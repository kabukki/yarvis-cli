/*
** lfind.c for  in /home/le-rou_c/lib/list/list
** 
** Made by Lucien Le Roux
** Login   <le-rou_c@epitech.net>
** 
** Started on  Thu Mar 23 21:02:01 2017 Lucien Le Roux
** Last update Thu Mar 23 21:09:49 2017 Lucien Le Roux
*/

#include "list.h"

/*
 * Returns the first node for which the function f
 * returns true.
 * If no node can be found, returns NULL.
 */
t_list *lfind(t_list *head, bool (*f)(void *)) {
  while (head) {
    if ((*f)(head->data))
      break ;
  }
  return head;
}
