/*
** new_node.c for  in /home/le-rou_c/lib/list/list
** 
** Made by Lucien Le Roux
** Login   <le-rou_c@epitech.net>
** 
** Started on  Thu Mar 23 15:21:46 2017 Lucien Le Roux
** Last update Thu Mar 23 21:14:41 2017 Lucien Le Roux
*/

#include "list.h"

/*
 * Creates a node
 */
t_list *lnode(void *data) {
  t_list *node = malloc(sizeof(*node));

  if (node != NULL) {
    node->data = data;
    node->next = NULL;
  }
  return node;
}
