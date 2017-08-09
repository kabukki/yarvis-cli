/*
** lcopy.c for  in /home/le-rou_c/lib/list/list
** 
** Made by Lucien Le Roux
** Login   <le-rou_c@epitech.net>
** 
** Started on  Thu Mar 23 18:22:18 2017 Lucien Le Roux
** Last update Fri Mar 24 11:35:45 2017 Lucien Le Roux
*/

#include "list.h"

/*
 * Creates a node with the data from another node
 */
t_list *lcopy(t_list *node) {
  return node ? lnode(node->data) : NULL;
}
