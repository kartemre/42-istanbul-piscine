/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekart <ekart@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 13:30:48 by ekart             #+#    #+#             */
/*   Updated: 2025/04/20 03:58:54 by ekart            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	i;
	unsigned int	res;

	dest_len = 0;
	src_len = 0;
	i = 0;
	while (dest[dest_len] && dest_len < size)
		dest_len++;
	while (src[src_len])
		src_len++;
	if (dest_len >= size)
		res = size + src_len;
	else
		res = dest_len + src_len;
	while (src[i] && (dest_len + 1) < size)
	{
		dest[dest_len] = src[i];
		dest_len++;
		i++;
	}
	if (dest_len < size)
		dest[dest_len] = '\0';
	return (res);
}
/*
int	main(void)
{
	char	dest[10] = "dest";
	char	src[10] = "srcemre";
	int	size = 3;

	printf("Dest: %s\n", dest);
	printf("%d\n", ft_strlcat(dest, src, size));
	printf("Dest: %s\n", dest);
}
*/
