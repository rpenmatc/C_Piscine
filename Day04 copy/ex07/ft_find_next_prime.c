/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpenmatc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 14:37:49 by rpenmatc          #+#    #+#             */
/*   Updated: 2018/07/13 14:37:51 by rpenmatc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int		ft_is_prime(int nb)
{
	int i;
    i = 2;
	while (i <= nb/2)
	{
		if (nb % i == 0)
			return (0);
		else
			i++;
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
    if (nb <= 2)
		return 2;
    while(!ft_is_prime(nb)){
        nb++;
    }
    return nb;
}
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char* argv[]) {
    printf("%d\n", ft_find_next_prime(atoi(argv[1])));
}
