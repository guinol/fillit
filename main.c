#include "./libft/libft.h"
#include <fcntl.h>
#include "./libft/ft_putstr.c"
#include "./libft/ft_strlen.c"
#include "./libft/ft_strnew.c"
#include "./libft/ft_bzero.c"
#include "./libft/ft_memset.c"
#include "./libft/ft_strdup.c"
#include "./libft/ft_strsplit.c"
#include "./libft/ft_memalloc.c"
#include "./libft/ft_strsub.c"
#include "./libft/ft_strncpy.c"
#include "./libft/ft_strcmp.c"

static void	ft_error()
{
	ft_putstr("error");
}

static int ft_isformat(char *s)
{
	int i;
	int k;
	int x;
	
	x = 0;
	i = 0;
	while (s[i])
        {      
                k = 0;
                while (s[i] != '\n')
                {
                       	i++;
                        k++;
                }
                if (k != 4)
                        return (0);
                x++;
                if (s[i + 1] == '\0' || s[i + 1] == '\n')
                {
                        if (x != 4)
                                return (0);
                        i++;
                        x = 0;
                }
       		i++;
	}
        return (1);
}

static int ft_cntdiez(char **s)
{
	int i;
	int j;
	int d;
	int c;
	
	c = 0;
	i = 0;
	while(ft_strcmp(s[i], "\0") != 0)
	{
		d = 0;
		j = 0;
		while (s[i][j])
		{
			if (s[i][j] == '#')
				d++;
			j++;
		}
		if (i % 4 == 0 && d != 4)
			return (0);
		else
			c = 0;
		i++;
	}
	return (1);
}

static int ft_isvalid(char *s)
{
	int i;

	i = 0;
	ft_putstr(s);
	while (s[i] == '\n' || s[i] == '#' || s[i] == '.')
		i++;
	if (i != ft_strlen(s))
		return (0);
	if (s[i - 1] == '\n' && s[i - 2] == '\n')
		return (0);
	i = 0;
	if (s[i] == '\n')
		return (0);
	if (!ft_isformat(s))
		return (0);
	//if (!ft_cntdiez(ft_strsplit(s, '\n')))
	//	return (0);
	return (1);
}

int main(int ac, char **av)
{
	int		fd;
	int		ret;
	char	*buff;
	char	**s;
	int i;

	i = 0;
	if (ac != 2)
		ft_error();
	if ((fd = open(av[1], O_RDONLY)) < 0) // Tu associes ton file a un fd
		ft_error(); // Si ca fail tu display une erreur
	buff = ft_strnew(BUFF_SIZE); // tu alloues un char *
	ft_bzero(buff, BUFF_SIZE); // un petit coup de bzero histoire d'avoir une string propre
	if ((read(fd, buff, BUFF_SIZE)) < 0) // et tu met les char dans ton char*buff
		ft_error();
	if (ft_isvalid(buff))
		ft_putstr("\nvalide\n");
	else
		ft_putstr("\nNON VALIDE\n");
	return (0);
}
