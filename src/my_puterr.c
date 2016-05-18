/*
** my_puterr.c for my_puterr in /home/roux_l/rendu/boggle/src
** 
** Made by Guillaume Roux
** Login   <roux_l@epitech.net>
** 
** Started on Tue May 17 18:20:14 2016 Guillaume Roux
** Last update Tue May 17 21:35:57 2016 quentin allary
*/

#include "../include/my.h"

void	err(char c)
{
  write (2, &c, 1);
}

void	my_puterr(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
  {
    err(str[i]);
    i++;
  }
}
