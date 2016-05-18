/*
** my_strcpy.c for my_strcpy in /home/roux_l/rendu/boggle/src
** 
** Made by Guillaume Roux
** Login   <roux_l@epitech.net>
** 
** Started on Tue May 17 22:44:32 2016 Guillaume Roux
** Last update  Tue May 17 22:44:32 2016 Guillaume Roux
*/

#include "../include/my.h"

char  *my_strcpy(char *dest, char *src)
{
  int i;

  i = 0;
  while (src[i])
    {
      dest[i] = src[i];
      i++;
    }
  dest[i] = '\0';
  return (dest);
}