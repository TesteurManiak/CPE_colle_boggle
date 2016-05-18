/*
** fill_board.c for fill_board in /home/roux_l/rendu/boggle/src
** 
** Made by Guillaume Roux
** Login   <roux_l@epitech.net>
** 
** Started on Tue May 17 19:40:40 2016 Guillaume Roux
** Last update Tue May 17 21:32:32 2016 quentin allary
*/

#include "../include/my.h"

void	add_verti(char *word, char **board, int y, int k)
{
  int	i;
  int	j;

  i = 0;
  j = 0;
  if (k == 0)
  {
    while (word[i] != '\0')
    {
      board[y][i] = word[i];
      i++;
    }
  }
  else
  {
    i = my_strlen(word) - 1;
    while (i > 0)
    {
      board[y][j] = word[i];
      i--;
      j++;
    }
  }
}

void	add_horizon(char *word, char **board, int x, int k)
{
  int	i;
  int	j;

  i = 0;
  j = 0;
  if (k == 0)
  {
    while (word[i] != '\0')
    {
      board[i][x] = word[i];
      i++;
    }
  }
  else
  {
    i = my_strlen(word) - 1;
    while (i > 0)
    {
      board[j][x] = word[i];
      i--;
      j++;
    } 
  } 
}

void	fill_board(char *word, char **board, int j)
{
  int	x;
  int	y;
  int	k;

  k = rand() % 1;
  if (my_strlen(word) <= 10)
  {
    x = rand() % 9;
    add_horizon(word, board, x, k);
  }
  else
  {
    y = rand() % 19;
    add_verti(word, board, y, k);
  }
}
