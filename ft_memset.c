/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokten <yokten@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 18:59:17 by yokten            #+#    #+#             */
/*   Updated: 2022/12/12 20:01:14 by yokten           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include    <stdio.h>

void *ft_memset(void *b, int c, size_t len)
{
    unsigned char *str;
    size_t i;
    
    str = (unsigned char*)b;
    i = 0;
    while(i < len)
    {
        str[i] = (unsigned char)c;
        i++;
    }
    return(b);
}
/*
int main()
{
    char str[] = "sinem";
    printf("%s", ft_memset(str, 'x', 4));
}*/