/*
** my_strlen.c for my_strlen( in /home/roux_l/rendu/boggle/src
** 
** Made by Guillaume Roux
** Login   <roux_l@epitech.net>
** 
** Started on Tue May 17 19:04:56 2016 Guillaume Roux
** Last update Tue May 17 21:37:22 2016 quentin allary
*/

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    i++;
  return (i);
}

int	my_strlen_tab(char **tab)
{
  int	i;

  i = 0;
  while (tab[i] != '\0')
    i++;
  return (i);
}
