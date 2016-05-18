/*
** my_putstr.c for my_putstr in /home/roux_l/rendu/boggle/src
** 
** Made by Guillaume Roux
** Login   <roux_l@epitech.net>
** 
** Started on Tue May 17 18:26:51 2016 Guillaume Roux
** Last update Tue May 17 21:36:18 2016 quentin allary
*/

#include "../include/my.h"

void	my_putchar(char c)
{
  write (1, &c, 1);
}

void	my_putstr(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
  {
    err(str[i]);
    i++;
  }
}
