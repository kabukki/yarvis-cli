/*
** lswap.c for  in /home/le-rou_c/lib/list/list
** 
** Made by Lucien Le Roux
** Login   <le-rou_c@epitech.net>
** 
** Started on  Thu Mar 23 15:58:04 2017 Lucien Le Roux
** Last update Thu Mar 23 21:34:50 2017 Lucien Le Roux
*/

#include "list.h"

/*
 * Exchanges the data of two nodes
 * If one of them is NULL, nothing happens.
 */
void lswap(t_list *a, t_list *b) {
  void *tmp;

  if (a == NULL || b == NULL)
    return ;
  tmp = a->data;
  a->data = b->data;
  b->data = tmp;
}
