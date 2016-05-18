/*
** win_check.c for win_check in /home/roux_l/rendu/boggle/src
** 
** Made by Guillaume Roux
** Login   <roux_l@epitech.net>
** 
** Started on Tue May 17 20:29:16 2016 Guillaume Roux
** Last update Tue May 17 21:37:35 2016 quentin allary
*/

#include "../include/my.h"

void	win_check(t_bog *prog)
{
  if (prog->final == prog->word)
    prog->kill = 1;
}
