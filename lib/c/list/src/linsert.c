/*
** linsert.c for  in /home/le-rou_c/lib/list/list
** 
** Made by Lucien Le Roux
** Login   <le-rou_c@epitech.net>
** 
** Started on  Thu Mar 23 18:25:30 2017 Lucien Le Roux
** Last update Fri Mar 24 11:40:40 2017 Lucien Le Roux
*/

#include "list.h"

/*
 * Insert a new node before a given node
 * If any of the nodes is NULL, nothing happens.
 */
void linsert(t_list *target, t_list *node) {
  t_list *tn;

  if (target == NULL || node == NULL)
    return ;
  tn = target->next;
  lswap(target, node);
  target->next = node;
  node->next = tn;
}
