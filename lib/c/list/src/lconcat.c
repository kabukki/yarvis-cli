/*
** lconcat.c for  in /home/le-rou_c/lib/list/list
** 
** Made by Lucien Le Roux
** Login   <le-rou_c@epitech.net>
** 
** Started on  Thu Mar 23 18:44:03 2017 Lucien Le Roux
** Last update Thu Mar 23 21:12:44 2017 Lucien Le Roux
*/

#include "list.h"

/*
 * Concatenates the second list to the first one.
 */
void lconcat(t_list *a, t_list *b) {
  lappend(a, b);
}
