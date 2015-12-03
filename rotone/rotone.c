/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaulom <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/03 11:31:32 by alaulom           #+#    #+#             */
/*   Updated: 2015/12/03 12:23:16 by alaulom          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putchar(int c)
{
	write (1, &c, 1);
}

int			main(int argc, char **argv)
{
	int		i;

	i = 0;
	if(argc == 2)
	{
		while (argv[1][i])
		{
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
				{
					if	(argv[1][i] == 'z')
						ft_putchar('a');
					else
						ft_putchar(argv[1][i] + 1);
				}
			else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
				{
					if (argv[1][i] == 'Z')
						ft_putchar('A');
					else
						ft_putchar(argv[1][i] + 1);
				}
			else
				ft_putchar(argv[1][i]);
			i++;
		}
	}
	ft_putchar('\n');
	return(0);
}
