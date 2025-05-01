/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekart <ekart@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 13:23:08 by ekart             #+#    #+#             */
/*   Updated: 2025/04/12 13:23:13 by ekart            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	unsigned int	a;
	char			c;

	if (nb < 0)
	{
		write(1, "-", 1);
		a = nb * -1;
	}
	else
		a = nb;
	if (a >= 10)
		ft_putnbr(a / 10);
	c = '0' + (a % 10);
	write(1, &c, 1);
}
/*
int main()
{
	ft_putnbr(-2147483648);
	write(1, "\n", 1);
	ft_putnbr(34);
	write(1, "\n", 1);
	ft_putnbr(-42);
	write(1, "\n", 1);
	ft_putnbr(2147483647);
}
*/
