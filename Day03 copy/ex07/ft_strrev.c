/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpenmatc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 13:01:53 by rpenmatc          #+#    #+#             */
/*   Updated: 2018/07/12 13:36:22 by rpenmatc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int	ft_strlen(char *str)
 {
	 int i = 0;
	 while(*str != '\0')
	 {
		 str++;
		 i++;
	 }
	 return i;
}

char	*ft_strev(char *str)
{
	char * start = str;
	char * end = str + ft_strlen(str) - 1;
	while(end > start)
	{
		char temp = *start;
		*start = *end;
		*end = temp;
		start++;
		end--;
	}
	return str;
}
int main()
{
	char c [] = {'H','E','L','L','O','\0'};
	char * d = ft_strev(c);
	printf("%s\n", d);
}
