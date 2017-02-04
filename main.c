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

//----------------------------------------------------------------------
/*
	On compte le nombre de "liaisons" entre deux '#' detectees.
Si il est inferieur a 3 on renvoie une erreur
*/
//----------------------------------------------------------------------

static int ft_istetro(char *s)
{	
	int i;
	int c;
	int l;
	
	i = -1;
	while (s[++i])
	{
		c = 0;
		l = 0;
		while (c < 20)
		{
				if (s[i] == '#')
				{
					if (s[i + 1] == '#')
						l++;
					if (s[i + 5] == '#')
						l++;
				}
			c++;
			i++;
		}
		if (l < 3)
			return (0);
	}
	return (1);
}

//----------------------------------------------------------------------
/*
	On compte le nombre de diez dans une piece de 20 caracteres.
(16 char + 4 retours a la ligne)
*/
//----------------------------------------------------------------------

static int ft_cntdiez(char *s)
{	
	int i;
	int c;
	int d;

	i = -1;
	while (s[++i])
	{
		c = 0;
		d = 0;
		while (c < 20)
		{
			if (s[i] == '#')
				d++;
			if (c == 19 && d != 4)
				return(0);
			c++;
			i++;
		}
	}
	return (1);
}

//----------------------------------------------------------------------
/*
	Verifie qu'il y a bien 4 lignes de 4 caracteres avant de
trouver un '\n' separateur ou bien le '\0' final
*/
//----------------------------------------------------------------------

static int ft_isformat(char *s)
{
	int k;	//	nombre de caracteres par lignes
	int x;	//	nombre de lignes avant un double '\n' ou le'\0' final
	
	x = 0;
	while (*s)
	{
		k = 0;
		while (*s != '\n')
		{
			s++;
			k++;
		}
		if (k != 4)
			return (0);
		x++;		// 
		if (*(s + 1) == '\0' || *(s + 1) == '\n')
		{
			if (x != 4)
				return (0);
			s++;
			x = 0;
		}
		s++;
	}
        return (1);
}

//----------------------------------------------------------------------
/*
	On verifie d'abord que la chaine ne contient que des '#', des '.' 
ou des '\n', qu'elle ne commence pas par '/n' et qu'elle se termine par un
unique '\n'. Puis on envoie la chaine originale dans les differentes 
fonctions de test	
*/
//----------------------------------------------------------------------

static int ft_isvalid(char *s)
{
	int i;

	i = 0;
	ft_putstr(s);
	if (s[i] == '\n')
		return (0);
	while (s[i] == '\n' || s[i] == '#' || s[i] == '.')
		i++;
	if (i != ft_strlen(s))
		return (0);
	if (s[i - 1] == '\n' && s[i - 2] == '\n')
		return (0);
	if (!ft_isformat(s))
		return (0);
	if (!ft_cntdiez(s))
		return (0);
	if (!ft_istetro(s))
		return (0);
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
