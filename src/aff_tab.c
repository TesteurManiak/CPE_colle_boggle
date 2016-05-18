/*
** aff_tab.c for aff_tab in /home/roux_l/rendu/boggle/src
** 
** Made by Guillaume Roux
** Login   <roux_l@epitech.net>
** 
** Started on Tue May 17 18:38:42 2016 Guillaume Roux
** Last update Tue May 17 21:31:12 2016 quentin allary
*/

#include "../include/my.h"

void	aff_tab(char **tab)
{
  int	i;

  i = 0;
  while (tab[i] != '\0')
  {
    my_putstr(tab[i]);
    my_putchar('\n');
    i++;
  }
}
