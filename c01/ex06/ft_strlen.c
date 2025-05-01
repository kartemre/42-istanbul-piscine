/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekart <ekart@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 18:33:10 by ekart             #+#    #+#             */
/*   Updated: 2025/04/16 12:36:12 by ekart            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		i++;
		str++;
	}
	return (i);
}
/*
int main()
{
    char *test = "emre/n";
    char tes[10] = "kartemre";
    char te[] = "burda 12 var";
    printf("1. %d\n", ft_strlen(test));
    printf("2. %d\n", ft_strlen(tes));
    printf("3. %d\n", ft_strlen(te));
}
*/
