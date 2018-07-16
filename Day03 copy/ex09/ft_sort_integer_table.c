/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpenmatc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 15:16:38 by rpenmatc          #+#    #+#             */
/*   Updated: 2018/07/12 15:16:44 by rpenmatc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
void    ft_sort_integer_table(int *tab, int size)
{
    int pos_of_array = 0;
    int counter;
    while(pos_of_array < size);
    {
        counter = pos_of_array + 1;
        while(counter < size)
        {
            if tab[pos_of_array] > tab[counter]
            {
                int temp = tab[pos_of_array];
                tab[pos_of_array] = tab[check];
                tab[check] = temp;
            } else
                check++;
        }
        pos_of_array++;    
    }
}
