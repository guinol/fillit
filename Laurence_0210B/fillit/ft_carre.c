#include "libft.h"
#include "fillit.h"

char** ft_inicarre(int nt)
{
	int i;
	int j;
	char **carre;

	i = 0;
	if (!(carre = (char**)malloc(sizeof(char*) * (nt + 1))))
		return (0);
	while (i < nt)
	{
		if(!(carre[i] = (char*)malloc(sizeof(char) * (nt + 1))))
			return (0);
		j = 0;
		while (j < nt)
		{
			carre[i][j] = ',';
			j++;
		}
		carre[i][j] = '\0';
		i++;
	}
	carre[i] = "\0";
	//ft_printcarre(carre);
	return (carre);
}

int	ft_isfilled(char **c, int nb_block)
{
	int i;
	int j;
	int n;

	n = 0;
	i = 0;
	while (ft_strcmp(c[i], "\0") != 0)
	{
		j = 0;
		while (c[i][j] != '\0')
		{
			if (c[i][j] != ',')
				n++;
			j++;
		}
		ft_putstr("\n");
		i++;
	}
	if (n != nb_block)
		return (0);
	return (1);
}

int	ft_place(char **t, char **c, int p, int a)
{
	int i;
	int j;

	i = 0;
	while (i < 4) != 0)
	{
		j = 0;
		while (j < 4)
		{
			
			j++;
		}
		i++;
	}
	return ()
}

int ft_carre(char ***t, char **c, int pos, int cmax, int nt, int actuel)
{
	char **ppc;
	int a;

	a = 0;
	while (a < nt)
	{
		ft_place(t[a], c, pos)
	}
	if (ft_isfilled(c, nt * 4))
	{
		ppc = c;
		ft_carre(t, ft_inicarre(cmax - 1), 0, cmax - 1, nt, 0);
	}
	ft_printcarre(c);
	return (0);	
}
