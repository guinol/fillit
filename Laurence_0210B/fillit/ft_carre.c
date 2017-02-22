#include "libft.h"
#include "fillit.h"

char	**ft_bord(char **c,int nt)
{
	int i;
	int j;

	i = 0;
	while (i < nt + 3)
	{
		j = 0;
		while (j < nt + 3)
		{
			if (j >= nt || i >= nt)
				c[i][j] = '0';
			j++;
		}
		i++;
	}
	return (c);
}

char	**ft_inicarre(int nt)
{
	int i;
	int j;
	char **carre;

	i = 0;
	if (!(carre = (char**)malloc(sizeof(char*) * (nt + 4))))
		return (0);
	while (i < nt + 3)
	{
		if(!(carre[i] = (char*)malloc(sizeof(char) * (nt + 4))))
			return (0);
		j = 0;
		while (j < nt + 3)
		{
			carre[i][j] = ',';
			j++;
		}
		carre[i][j] = '\0';
		i++;
	}
	carre[i] = "\0";
	carre = ft_bord(carre, nt);
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
			if (ft_isalpha(c[i][j]))
				n++;
			j++;
		}
		i++;
	}
	if (n != nb_block)
		return (0);
	return (1);
}

int	ft_canplace(char **t, char **c, int cm, int p)
{
	int i;
	int j;

	i = 0;
	ft_putstr("CANPLACE");
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			if (ft_isalpha(t[i][j]) && c[p / cm + i][p % cm + j] != ',')
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

char **ft_place(char **t, char **c, int cmax, int p)
{
	int i;
	int j;

	i = 0;
	ft_putstr("Place\n");
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			if (ft_isalpha(t[i][j]))
				c[p / cmax + i][p % cmax + j] = t[i][j];
			j++;
		}
		i++;
	}
	return (c);
}

int ft_carre(char ***t, char **c, int pos, int cmax, int nt, int actuel)
{
	char **ppc;
	int a;

	a = 0;
	actuel = 0;
	ft_putstr("DEBUT");
	while (a < nt && pos < cmax * cmax)
	{
		if(ft_canplace(t[a], c, cmax, pos))
		{
			c = ft_place(t[a], c, cmax, pos);
			a++;
			pos = 0;
		}
		else
			pos++;		
	}
	ft_putstr("PLACE\n");
	if (ft_isfilled(c, nt * 4))
	{
		ft_putstr("PLEIN\n");
		ppc = c;
		ft_printcarre(ppc);
		ft_carre(t, ft_inicarre(cmax - 1), 0, cmax - 1, nt, 0);
	}	
	//ft_printcarre(ppc);
	return (0);	
}
