/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaulom <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/03 16:38:01 by alaulom           #+#    #+#             */
/*   Updated: 2015/12/03 17:17:45 by alaulom          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int			main(int argc, char **argv)
{
	int		i;
	int		j;

	if (argc == 3)
	{
		i = 0;
		j = 0;
		while (argv[2][i] != '\0')
		{
			if (argv[1][j] == '\0')
			{
				ft_putstr(argv[1]);
				write(1, "\n", 1);
				return (0);
			}
			if (argv[2][i] == argv[1][j])
				j++;
			i++;
		}
		if (argv[2][i] == '\0')
			ft_putstr(argv[1]);
	}
	write(1, "\n", 1);
	return (0);
}
