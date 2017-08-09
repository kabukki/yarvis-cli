/*
** print_list.c for  in /home/le-rou_c/lib/list/list
** 
** Made by Lucien Le Roux
** Login   <le-rou_c@epitech.net>
** 
** Started on  Thu Mar 23 15:28:57 2017 Lucien Le Roux
** Last update Thu Mar 23 21:14:14 2017 Lucien Le Roux
*/

#include "list.h"

/*
 * Executes f for every member of the list
 */
void liter(t_list *head, void (*f)(void *)) {
  while (head) {
    (*f)(head->data);
    head = head->next;
  }
}
