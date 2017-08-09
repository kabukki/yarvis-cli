/*
** lapply.c for  in /home/le-rou_c/lib/list/list
** 
** Made by Lucien Le Roux
** Login   <le-rou_c@epitech.net>
** 
** Started on  Thu Mar 23 18:47:30 2017 Lucien Le Roux
** Last update Thu Mar 23 21:12:08 2017 Lucien Le Roux
*/

#include "list.h"

/*
 * Applies f to every member of the list.
 */
void lapply(t_list *head, void *(*f)(void *)) {
  while (head) {
    head->data = (*f)(head->data);
    head = head->next;
  }
}
