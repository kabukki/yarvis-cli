/*
** lrev.c for  in /home/le-rou_c/lib/list/list
** 
** Made by Lucien Le Roux
** Login   <le-rou_c@epitech.net>
** 
** Started on  Thu Mar 23 21:35:50 2017 Lucien Le Roux
** Last update Thu Mar 23 22:36:26 2017 Lucien Le Roux
*/

#include "list.h"

/*
 * Reverses the list
 * Returns the reversed list
 */
t_list *lrev(t_list *head) {
  t_list *newhead = NULL, *next = NULL;

  while (head) {
    next = head->next;
    head->next = newhead;
    newhead = head;
    head = next;
  }
  return newhead;
}
