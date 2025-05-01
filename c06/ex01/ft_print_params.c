/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekart <ekart@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 23:09:17 by ekart             #+#    #+#             */
/*   Updated: 2025/04/25 00:29:32 by ekart            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	c;

	c = 1;
	if (argc > 0)
	{
		while (argv[c])
		{
			i = 0;
			while (argv[c][i])
			{
				write(1, &argv[c][i], 1);
				i++;
			}
			write(1, "\n", 1);
			c++;
		}
	}
}
