#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include	<unistd.h>
# include	<stdlib.h>
# include	<stddef.h>
# include	<stdarg.h>

int		ft_printf(const char *string, ...);
int		_s_verifier(char *string);
int		_c_verifier(int c);
int		_d_verifier(int d);
#endif
