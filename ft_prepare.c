#include "libft.h"
#include "fillit.h"

int	ft_prepare(char *s)
{
	int cmin;
	int size_buff;
	char	**tab;
	char	***table;
	
	ft_diezletters(s);
	tab = ft_buff2d(s);
	tab = ft_totop(tab, ft_nbtetra(s));
	size_buff = ft_nbtetra(s) * 4;
	table = ft_tetra3d(tab, ft_nbtetra(s));
	cmin = ft_cmin(ft_nbtetra(s));
	tab = ft_inisol(cmin);
	while(!ft_solve(table, tab, 0, ft_nbtetra(s)))
	{
		++cmin;
		tab = ft_inisol(cmin);
	}
	return (0);
}
