/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aplha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaulom <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/14 11:34:17 by alaulom           #+#    #+#             */
/*   Updated: 2015/12/14 13:13:27 by alaulom          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		putchar(char c)
{
	write(1, &c, 1);
}

int			main(int ac, char **av)
{
	int		i;

	i = 0;
	if (ac == 2)
	{
		while (av[1][i])
		{
			if (av[1][i] >= 'a' && av[1][i] <= 'z')
				putchar('m' - (av[1][i] - 'n'));
			else if (av[1][i] >= 'A' && av[1][i] <= 'Z')
				putchar('M' - (av[1][i] -'N'));
			else
				putchar(av[1][i]);
			i++;
		}
	}
	putchar('\n');
	return (0);
}
