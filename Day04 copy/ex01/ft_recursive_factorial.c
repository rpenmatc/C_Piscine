/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpenmatc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 10:45:13 by rpenmatc          #+#    #+#             */
/*   Updated: 2018/07/13 10:59:42 by rpenmatc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 int    ft_recursive_factorial(int nb)
 {
    if(nb < 0)
        return 0;
    if(nb == 0)
        return 1;
    else
        return nb * ft_recursive_factorial(nb - 1);
 }