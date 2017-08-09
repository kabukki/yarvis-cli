/*
** prepend.c for  in /home/le-rou_c/lib/list/list
** 
** Made by Lucien Le Roux
** Login   <le-rou_c@epitech.net>
** 
** Started on  Thu Mar 23 18:16:12 2017 Lucien Le Roux
** Last update Fri Mar 24 11:39:00 2017 Lucien Le Roux
*/

#include "list.h"

/*
 * Adds node before the head of the list.
 */
void lprepend(t_list *head, t_list *node) {
  linsert(head, node);
}
