/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekart <ekart@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 18:32:31 by ekart             #+#    #+#             */
/*   Updated: 2025/04/15 21:52:51 by ekart            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}
/*
int main()
{
    char *test = "Merhaba 42!\n";
    char tes[6] = "emre\n";
    char te[] = "aksbr\n";

    ft_putstr(test);
    ft_putstr(tes);
    ft_putstr(te);
}
*/
