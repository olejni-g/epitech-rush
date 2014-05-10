/*
** my.h for Piscine-C-include in /home/weisli_r/rendu/Piscine-C-include
**
** Made by      Rémi WEISLINGER
** Login        weisli_r
**
** Started on   Fri Oct 11 09:39:16 2013 weisli_r
** Update       Sat May 10 02:01:46 2014 weisli_r
*/

#ifndef MY_H_
# define MY_H_

#include <stdio.h>

int		my_putnbr(int);
int		my_putnbr_base(int, char *);
int		my_char_isalpha(char);
int		my_char_isnum(char);
int		my_str_isalpha(char *);
int		my_str_isnum(char *);
int		my_str_islower(char *);
int		my_str_isupper(char *);
int		my_str_isprintable(char *);
int		my_isneg(int);
int		my_isprime(int);
int		my_getnbr(char *);
int		my_getnbr_base(char *nmbr, char *base);
void	my_sort_int_tab(int *, int);
int		my_pow(int, int);
int		my_sqrt(int);
char	*my_malloc_string(int);
char	**my_malloc_stringarray(int);
char	**my_str_to_wordtab(char *, char *);

int		my_putc(char);
int		my_puts(const char *);
int		my_fputc(char, int);
int		my_fputs(const char *, int);
int		my_putchar(char);
int		my_putstr(const char *);
int		my_putnbr(int);
int		my_putnbr_base(int, char *);
int		my_printf(const char *, ...);
char	*my_getline(int);

int		my_atoi(const char *);

char	*my_strcat(char *, const char *);
char	*my_strcpy(char *, const char *);
char	*my_strncat(char *, const char *, int);
char	*my_strncpy(char *, const char *, int);
char	*my_strstr(char *, const char *);
char	*my_strtolower(char *);
char	*my_strtoupper(char *);
int		my_strncmp(const char *, const char *, int);
int		my_strcmp(const char *, const char *);
int		my_strlen(const char *);

char	*my_revstr(char *);

#endif /* !MY_H_ */
