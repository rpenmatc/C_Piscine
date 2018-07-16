/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpenmatc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 12:45:41 by rpenmatc          #+#    #+#             */
/*   Updated: 2018/07/13 12:45:43 by rpenmatc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 int    ft_sqrt(int nb)
 {
     int i;
     i = 0;
     while(i <= nb)
     {
         if(i * i == nb)
            return i;
        i++;
     }
     return 0;
 }
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char* argv[]) {
    printf("%d\n", ft_sqrt(atoi(argv[1])));
}