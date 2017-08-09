/*
** lappend.c for  in /home/le-rou_c/lib/list/list
** 
** Made by Lucien Le Roux
** Login   <le-rou_c@epitech.net>
** 
** Started on  Thu Mar 23 16:06:41 2017 Lucien Le Roux
** Last update Thu Mar 23 21:38:09 2017 Lucien Le Roux
*/

#include "list.h"

/*
 * Adds node to the end of the list
 */
void lappend(t_list *head, t_list *node) {
  if (head == NULL)
    return ;
  llast(head)->next = node;
}
