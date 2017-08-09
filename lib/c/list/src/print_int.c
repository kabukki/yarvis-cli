/*
** print_int.c for  in /home/le-rou_c/lib/list/list/src
** 
** Made by Lucien Le Roux
** Login   <le-rou_c@epitech.net>
** 
** Started on  Thu Mar 23 15:41:11 2017 Lucien Le Roux
** Last update Thu Mar 23 15:42:11 2017 Lucien Le Roux
*/

#include "list.h"

void print_int(void *data) {
  printf("%d\n", *((int *)data));
}
