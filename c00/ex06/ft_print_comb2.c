/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekart <ekart@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 13:22:46 by ekart             #+#    #+#             */
/*   Updated: 2025/04/12 13:22:48 by ekart            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write_one(int a)
{
	char	c;

	if (a <= 9)
	{
		c = '0' + a;
		write(1, "0", 1);
		write(1, &c, 1);
	}
	else
	{
		c = '0' + (a / 10);
		write(1, &c, 1);
		c = '0' + (a % 10);
		write(1, &c, 1);
	}
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 99)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_write_one(a);
			write(1, " ", 1);
			ft_write_one(b);
			if (a < 98 || b < 99)
				write(1, ", ", 2);
			b++;
		}
		a++;
	}
}
/*
int main()
{
	ft_print_comb2();
}
*/
