/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pecosta- <pecosta-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 13:46:49 by pecosta-          #+#    #+#             */
/*   Updated: 2022/09/24 11:00:24 by pecosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

char	write_char(char b)
{
	if ((b >= 'a' && b <= 'm') || (b >= 'A' && b <= 'M'))	
	b += 13;
	else if ((b >= 'n' && b <= 'z') || (b >= 'N' && b <= 'Z'))
		b -= 13;
	return (b);
}

int	main(int ac, char **av)
{
	int		i;
	char	c;
	if (ac == 2 )
	{
		i = 0;
		while(av[1][i] != '\0')
		{
		c = write_char(av[1][i]);
			write(1, &c, 1);
		i++;
	}
}
write(1, "\n", 1);
}
