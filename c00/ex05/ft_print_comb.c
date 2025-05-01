/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekart <ekart@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 13:21:59 by ekart             #+#    #+#             */
/*   Updated: 2025/04/12 13:22:02 by ekart            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write(int a, int b, int c)
{
	char	x;

	x = '0' + a;
	write(1, &x, 1);
	x = '0' + b;
	write(1, &x, 1);
	x = '0' + c;
	write(1, &x, 1);
}

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = 0;
	while (a <= 9)
	{
		b = a + 1;
		while (b <= 9)
		{
			c = b + 1;
			while (c <= 9)
			{
				ft_write(a, b, c);
				if (a == 7 && b == 8 && c == 9)
					return ;
				else
					write(1, ", ", 2);
				c++;
			}
			b++;
		}
		a++;
	}
}
/*
int main()
{
	ft_print_comb();
}
*/
