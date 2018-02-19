/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf_error.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: local <local@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 19:12:20 by local             #+#    #+#             */
/*   Updated: 2018/02/19 19:12:22 by local            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	fdf_exit(void)
{
	exit(1);
}

void	fdf_malloc_error(void)
{
	ft_putstr_fd("malloc error\n", 2);
	fdf_exit();
}

void	fdf_map_error(void)
{
	ft_putstr_fd("map error\n", 2);
	fdf_exit();
}

void	fdf_arg_error(void)
{
	ft_putstr_fd("Un seul argument pris en compte.\n", 2);
	fdf_exit();
}
