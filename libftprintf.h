#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include	<unistd.h>
# include	<stdlib.h>
# include	<stddef.h>
# include	<stdarg.h>

int		ft_size_ptr(size_t n, int base);
char	*ft_strchr(const char *s, int c);
void	*ft_calloc(size_t nmemb, size_t size);
char	*ft_itoa(int n);
char	*ft_utoa(unsigned int u);
char    *ft_utoh(unsigned int x);
int		_s_verifier(char *string);
int		_c_verifier(int c);
int		_di_verifier(int d);
int		_u_verifier(unsigned int u);
int		_x_verifier(unsigned int x);
int		_p_verifier(size_t p);
int		ft_printf(const char *string, ...);
#endif
