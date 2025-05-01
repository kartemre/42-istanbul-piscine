/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekart <ekart@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 18:33:35 by ekart             #+#    #+#             */
/*   Updated: 2025/04/16 12:38:27 by ekart            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < size / 2)
	{
		temp = tab[size - 1 - i];
		tab[size - 1 - i] = tab[i];
		tab[i] = temp;
		i++;
	}
}
/*
int main()
{
    int test[] = {12, 13, 14, 15};
    int i = 0;
    ft_rev_int_tab(test, 4);
    while(i < 4)
    {
        printf("%d, ", test[i]);
        i++;
    }
}
*/
