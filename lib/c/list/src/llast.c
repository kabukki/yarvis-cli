/*
** llast.c for  in /home/le-rou_c/lib/list/list
** 
** Made by Lucien Le Roux
** Login   <le-rou_c@epitech.net>
** 
** Started on  Thu Mar 23 21:37:08 2017 Lucien Le Roux
** Last update Fri Mar 24 09:46:22 2017 Lucien Le Roux
*/

#include "list.h"

/*
 * Returns the last element of the list
 */
t_list *llast(t_list *head) {
  while (head && head->next) {
    head = head->next;
  }
  return head;
}
