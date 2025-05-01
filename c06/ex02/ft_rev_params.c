/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekart <ekart@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 23:09:47 by ekart             #+#    #+#             */
/*   Updated: 2025/04/25 01:10:29 by ekart            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	c;

	c = argc - 1;
	if (argc > 0)
	{
		while (0 < c)
		{
			i = 0;
			while (argv[c][i])
			{
				write(1, &argv[c][i], 1);
				i++;
			}
			write(1, "\n", 1);
			c--;
		}
	}
}
