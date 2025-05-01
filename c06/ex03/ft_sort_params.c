/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekart <ekart@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 23:10:26 by ekart             #+#    #+#             */
/*   Updated: 2025/04/25 21:17:54 by ekart            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}

void	print_param(int argc, char **argv)
{
	int	s;
	int	i;

	s = 1;
	i = 0;
	while (s < argc)
	{
		i = 0;
		while (argv[s][i] != '\0')
		{
			write(1, &argv[s][i], 1);
			i++;
		}
		argv[s][i] = '\0';
		write(1, "\n", 1);
		s++;
	}
}

int	main(int argc, char **argv)
{
	char	*temp;
	int		s;

	s = 1;
	while (s < argc - 1)
	{
		if (ft_strcmp(argv[s], argv[s + 1]) > 0)
		{
			temp = argv[s];
			argv[s] = argv[s + 1];
			argv[s + 1] = temp;
			s = 1;
		}
		else
			s++;
	}
	print_param(argc, argv);
	return (0);
}
