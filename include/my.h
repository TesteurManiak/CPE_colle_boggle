/*
** my.h for my in /home/roux_l/rendu/boggle/include
** 
** Made by Guillaume Roux
** Login   <roux_l@epitech.net>
** 
** Started on Tue May 17 18:30:19 2016 Guillaume Roux
** Last update Tue May 17 21:29:26 2016 quentin allary
*/

#ifndef MY_H_
# define MY_H_

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

typedef struct	s_bog
{
  int		kill;
  int		word;
  int		final;
  char		**pos;
}		t_bog;

int	nb_char(char **dico);
int	my_strlen_tab(char **tab);
int	my_strcmp(char *s1, char *s2);
int	check_char(char **tab);
int	check_letters(char *str);
int	my_strlen(char *str);

char  *my_strcpy(char *dest, char *src);
char	*get_next_line(int fd);

void	win_check(t_bog *prog);
void	gameplay(char **dico, char **board);
void	fill_board(char *word, char **board, int j);
void	free_tab(char **tab);
void	my_putchar(char c);
void	my_putstr(char *str);
void	err(char c);
void	my_puterr(char *str);
void	aff_tab(char **tab);

#endif	/* !MY_H_ */
