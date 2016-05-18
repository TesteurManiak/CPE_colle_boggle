/*
** gameplay.c for gameplay in /home/roux_l/rendu/boggle/src
** 
** Made by Guillaume Roux
** Login   <roux_l@epitech.net>
** 
** Started on Tue May 17 20:03:30 2016 Guillaume Roux
** Last update Tue May 17 21:34:00 2016 quentin allary
*/

#include "../include/my.h"

int		check_dico(char *command, char **dico, t_bog *prog)
{
  int		i;

  i = 0;
  if (command == NULL)
    exit (-1);
  while (dico[i] != '\0')
  {
    if (my_strcmp(command, dico[i]) == 0)
    {
      dico[i] = "busorenkin";
      prog->final++;
      return (i);
    }
    i++;
  }
  free(command);
  return (-1);
}

int	g_prompt(char **dico, char **board, t_bog *prog)
{
  char	*command;

  aff_tab(board);
  my_putchar('\n');
  win_check(prog);
  my_putstr("Word ?\n> ");
  command = get_next_line(0);
  return (check_dico(command, dico, prog));
}

void	gameplay(char **dico, char **board)
{
  t_bog	prog;

  prog.kill = 0;
  prog.word = my_strlen_tab(dico) - 1;
  prog.final = 0;
  while (prog.kill != 1)
  {
    while (g_prompt(dico, board, &prog) == -1)
      my_putstr("invalid word\n");
  }
  my_putstr("You Win !\n");
}
