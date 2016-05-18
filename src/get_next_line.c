/*
** get_next_line.c for get_next_line in /home/roux_l/rendu/boggle/src
** 
** Made by Guillaume Roux
** Login   <roux_l@epitech.net>
** 
** Started on Tue May 17 18:36:03 2016 Guillaume Roux
** Last update Tue May 17 21:34:43 2016 quentin allary
*/

#include "../include/my.h"

char  *get_next_line(const int fd)
{
  char  *res;
  char  buffer;
  int a;

  a = read(fd, &buffer, 1);
  if (a == 0 || a == -1)
    return (NULL);
  a = 0;
  res = malloc(sizeof(char) * 10000);
  res[a] = buffer;
  a++;
  while (buffer != '\n' && a < 10000)
    {
      read(fd, &buffer, 1);
      res[a] = buffer;
      a++;
    }
  if (a >= 10000)
    {
      my_putstr("Error in line\n");
      return (NULL);
    }
  res[a - 1] = '\0';
  return (res);
}