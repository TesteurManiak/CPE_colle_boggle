/*
** error.c for error in /home/allary_q/rendu/sdeux/boggle
** 
** Made by quentin allary
** Login   <allary_q@epitech.net>
** 
** Started on  Tue May 17 18:26:42 2016 quentin allary
** Last update Tue May 17 21:31:49 2016 quentin allary
*/

#include "../include/my.h"

int	nb_char(char **dico)
{
  int	i;
  int	total;

  i = 0;
  total = 0;
  while (dico[i] != '\0')
  {
    total = total + my_strlen(dico[i]);
    i++;
  }
  if (total > 200)
  {
    my_puterr("Error : too much word in the dictionnary\n");
    return (-1);
  }
  return (0);
}

int	check_char(char **tab)
{
  int	i;

  i = 0;
  while (tab[i] != '\0')
    {
      if (my_strlen(tab[i]) > 20)
      {
        my_puterr("Error : a word is too long\n");
        return (-1);
      }
      else
	{	
	  if (check_letters(tab[i]) == -1)
    {
      my_puterr("Error : the dictionnary is invalid\n");
	    return (-1);
    }
	}     
      i++;
    }
}

int	check_letters(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] > 122 || str[i] < 97)
	return (-1);
      i++;
    }
}
