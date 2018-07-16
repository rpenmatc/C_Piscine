/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpenmatc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 11:32:46 by rpenmatc          #+#    #+#             */
/*   Updated: 2018/07/13 11:32:48 by rpenmatc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 int    ft_recursive_power(int nb, int power)
{
    int power;
    if(power < 0)
        return 0;
    else if (power == 0)
        return 1;
    return nb * ft_recursive_power(nb * power - 1)
    }
}
