/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpenmatc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 14:27:11 by rpenmatc          #+#    #+#             */
/*   Updated: 2018/07/12 15:04:44 by rpenmatc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int	ft_atoi(char *str)
{
	int positive = 1;
	int res = 0;
	while(*str != '\0')
	{
		if (*str == '-')
		    positive = 0;
        else if(*str  < '0' || *str > '9')
			return res;
		else if (positive)
			res = res * 10 + (*str - '0');
		else
			res = res * 10 - (*str - '0');
        str++;
	}
    return res;
}
int main()
{
    printf("%d\n",ft_atoi("-32"));
}
		

