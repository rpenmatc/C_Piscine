/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpenmatc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 13:47:55 by rpenmatc          #+#    #+#             */
/*   Updated: 2018/07/13 13:47:58 by rpenmatc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int i;
    i = 2;
	if (nb <= 0)
		return 0;
	while (i <= nb/2)
	{
		if (nb % i == 0)
			return (0);
		else
			i++;
	}
	return (1);
}

#include <stdio.h>
#include <stdlib.h>
int main(int argc, char* argv[]) {
    printf("%d\n", ft_is_prime(atoi(argv[1])));
}