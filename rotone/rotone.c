/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaulom <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 15:32:40 by alaulom           #+#    #+#             */
/*   Updated: 2015/11/30 17:09:57 by alaulom          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		isupper(int c)
{
	return (c >= 'A' && c < 'Z');
}

int		islower(int c)
{
	return (c >= 'a' && c < 'z');
}

int		main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			if (islower(argv[1][i]))
			{
				if (argv[1][i] == 'z')
					write (1, "a", 1);
				else
				{
					argv[1][i]++;
					write (1, &argv[1][i], 1);
				}
			}
			else if (isupper(argv[1][i]))
			{
				if (argv[1][i] == 'Z')
					write (1, "A", 1);
				else
				{
					argv[1][i]++;
					write (1, &argv[1][i], 1);
				}
			}
			else
				write(1, &argv[1][i], 1);
			i++;
		}
	}
	write (1, "\n", 1);	
	return (0);
}
