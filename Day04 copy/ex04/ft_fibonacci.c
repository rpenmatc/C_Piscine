/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpenmatc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 12:30:01 by rpenmatc          #+#    #+#             */
/*   Updated: 2018/07/13 12:30:05 by rpenmatc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 int    ft_fibonacci(int index)
 {
     if(index < 0)
        return -1;
    else if (index == 0 )
        return 0;
    else if (index < 2)
        return 1;
    return ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
 }
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char* argv[]) {
    printf("%d\n", ft_fibonacci(atoi(argv[1])));
}
