/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf_matrice.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: local <local@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 19:12:04 by local             #+#    #+#             */
/*   Updated: 2018/02/19 19:12:05 by local            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

t_matrice	*ft_matrice_rotation_x(double beta)
{
	t_matrice *m;

	if (!(m = (t_matrice*)ft_memalloc(sizeof(t_matrice))))
		fdf_malloc_error();
	m->a1 = 1;
	m->b2 = cos(beta);
	m->b3 = -sin(beta);
	m->c2 = sin(beta);
	m->c3 = cos(beta);
	m->d4 = 1;
	return (m);
}

t_matrice	*ft_matrice_rotation_y(double beta)
{
	t_matrice *m;

	if (!(m = (t_matrice*)ft_memalloc(sizeof(t_matrice))))
		fdf_malloc_error();
	m->a1 = cos(beta);
	m->a3 = sin(beta);
	m->c1 = -sin(beta);
	m->c3 = cos(beta);
	m->b2 = 1;
	m->d4 = 1;
	return (m);
}

t_matrice	*ft_matrice_rotation_z(double beta)
{
	t_matrice *m;

	if (!(m = (t_matrice*)ft_memalloc(sizeof(t_matrice))))
		fdf_malloc_error();
	m->a1 = cos(beta);
	m->a2 = -sin(beta);
	m->b1 = sin(beta);
	m->b2 = cos(beta);
	m->c3 = 1;
	m->d4 = 1;
	return (m);
}

t_matrice	*ft_matrice_translation(double tx, double ty, double tz)
{
	t_matrice *m;

	if (!(m = (t_matrice*)ft_memalloc(sizeof(t_matrice))))
		fdf_malloc_error();
	m->a4 = tx;
	m->b4 = ty;
	m->c4 = tz;
	m->a1 = 1;
	m->b2 = 1;
	m->c3 = 1;
	m->d4 = 1;
	return (m);
}

t_matrice	*ft_matrice_scale(double s)
{
	t_matrice *m;

	if (!(m = (t_matrice*)ft_memalloc(sizeof(t_matrice))))
		fdf_malloc_error();
	m->a1 = s;
	m->b2 = s;
	m->c3 = s;
	m->d4 = 1;
	return (m);
}
