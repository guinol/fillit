#include "../libft/libft.h"
#include <fcntl.h>
#include "../libft/ft_putstr.c"
#include "../libft/ft_strlen.c"
#include "../libft/ft_strnew.c"
#include "../libft/ft_bzero.c"
#include "../libft/ft_memset.c"

void	ft_error()
{
	ft_putstr("error");
}

int main(int ac, char **av)
{
	int		fd;
	int		ret;
	char	*buff;
	char	**s;

	if ((fd = open(av[1], O_RDONLY)) < 0) // Tu associes ton file a un fd
	ft_error(); // Si ca fail tu display une erreur
	buff = ft_strnew(BUFF_SIZE); // tu alloues un char *
	ft_bzero(buff, BUFF_SIZE); // un petit coup de bzero histoire d'avoir une string propre
	if ((read(fd, buff, BUFF_SIZE)) < 0) // et tu met les 546 char dans ton char*buff
		ft_error();
	ft_putstr(buff);
	while (buff[i] != 0)
	{
		if (buff[i] != '.' && buff[i] != '#' && buff[i] != '\n')
			i++;
		else
			ft_error();

	}
	return (0);
}
