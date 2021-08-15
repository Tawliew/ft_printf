#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include	<unistd.h>
# include	<stdlib.h>
# include	<stddef.h>
# include	<stdarg.h>

int		ft_toupper(int c);
int		ft_size_ptr(size_t n, int base);
char	*ft_strchr(const char *s, int c);
void	*ft_calloc(size_t nmemb, size_t size);
char	*ft_itoa(int n);
char	*ft_utoa(unsigned int u);
char	*ft_utoh(size_t x);
int		_s_verifier(char *string);
int		_c_verifier(int c);
int		_di_verifier(int d, char **string);
int		_u_verifier(unsigned int u, char **string);
int		_x_verifier(unsigned int x, char **string);
int		_xx_verifier(unsigned int x, char **string);
int		_p_verifier(size_t p, char **string);
int		ft_printf(const char *string, ...);
#endif
