/*
** lat.c for  in /home/le-rou_c/lib/list/list
** 
** Made by Lucien Le Roux
** Login   <le-rou_c@epitech.net>
** 
** Started on  Thu Mar 23 16:04:01 2017 Lucien Le Roux
** Last update Thu Mar 23 21:12:22 2017 Lucien Le Roux
*/

#include "list.h"

/*
 * Returns the n-th node from the list
 * NULL if n is greater than the size of the list
 */
t_list *lat(t_list *head, size_t n) {
  while (head && n > 0) {
    head = head->next;
    n--;
  }
  return head;
}
