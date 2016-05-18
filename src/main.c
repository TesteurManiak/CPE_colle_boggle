/*
** main.c for main in /home/roux_l/rendu/boggle/src
** 
** Made by Guillaume Roux
** Login   <roux_l@epitech.net>
** 
** Started on Tue May 17 18:19:33 2016 Guillaume Roux
** Last update Tue May 17 21:39:45 2016 quentin allary
*/

#include "../include/my.h"

void	add_board(char **dico, char **board)
{
  int	i;
  int	j;

  i = 0;
  while (dico[i] != '\0')
  {
    j = rand() % 1;
    fill_board(dico[i], board, j);
    i++;
  }
}

void	make_tab(char **dico)
{
  char	*line;
  char	**board;
  int	x;
  int	y;

  y = 0;
  board = malloc(sizeof(char *) * 10);
  while (y < 10)
  {
    line = malloc(sizeof(char) * 21);
    x = 0;
    while (x < 20)
    {
      line[x] = 97 + (rand() % 26);
      x++;
    }
    board[y] = line;
    y++;
  }
  add_board(dico, board);
  gameplay(dico, board);
  free_tab(board);
}

int	read_board(int fd)
{
  int	i;
  char	**dico;

  i = 0;
  dico = malloc(sizeof(char *) * 10000);
  while ((dico[i] = get_next_line(fd)) != '\0')
    i++;
  if (check_char(dico) == -1 || nb_char(dico) == -1)
    return (-1);
  make_tab(dico);
  return (0);
}

int	open_board(char *path)
{
  int	fd;

  fd = open(path, 'r', O_RDONLY);
  if (fd == -1)
  {
    my_puterr("Error : can't open the file\n");
    return (-1);
  }
  if (read_board(fd) == -1)
    return (-1);
  close(fd);
  return (0);
}

int	main(int ac, char **av)
{
  if (ac == 2)
    open_board(av[1]);
  else 
    my_puterr("Error : give a dictionnary as argument\n");
  return (0);
}
