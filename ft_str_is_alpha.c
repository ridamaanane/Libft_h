/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaanane <rmaanane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 00:53:47 by rmaanane          #+#    #+#             */
/*   Updated: 2024/10/22 00:53:47 by rmaanane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_str_is_alpha(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 65 && str[i] <= 90)
            i++;
        else 
            return (0);
        i++;
    }
    return (1); 
}