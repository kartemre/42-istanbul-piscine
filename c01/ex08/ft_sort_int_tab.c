/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekart <ekart@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 18:33:51 by ekart             #+#    #+#             */
/*   Updated: 2025/04/16 12:43:01 by ekart            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_contral(int *tab, int size)
{
	int	i;

	i = 0;
	while (i < size - 1)
	{
		if (tab[i] > tab[i + 1])
			return (1);
		i++;
	}
	return (0);
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	temp;
	int	flag;

	flag = 1;
	while (flag != 0)
	{
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				temp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = temp;
			}
			i++;
		}
		flag = ft_contral(tab, size);
	}
}
/*
int main()
{
    int test[] = {15, 14, 13, 35};
    int i = 0;
    ft_sort_int_tab(test, 4);
    while(i < 4)
    {
        printf("%d, ", test[i]);
        i++;
    }
}
*/
