/*
** free_tab.c for free_tab in /home/roux_l/rendu/boggle/src
** 
** Made by Guillaume Roux
** Login   <roux_l@epitech.net>
** 
** Started on Tue May 17 18:54:34 2016 Guillaume Roux
** Last update Tue May 17 21:33:02 2016 quentin allary
*/

#include "../include/my.h"

void	free_tab(char **tab)
{
  int	i;

  i = 0;
  while (tab[i])
  {
    free(tab[i]);
    i++;
  }
  free(tab);
}
