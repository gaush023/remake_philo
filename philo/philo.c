/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sagemura <sagemura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 02:11:44 by sagemura          #+#    #+#             */
/*   Updated: 2024/02/27 18:15:30 by sagemura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

static int	philo_set_vars(int ac, char **av)
{
	t_vars	vars;

	vars.philo_num = get_nbr(av[1]);
	vars.time2die = get_nbr(av[2]);
	vars.time2eat = get_nbr(av[3]);
	vars.time2sleep = get_nbr(av[4]);
	if (ac == 6)
		vars.must2eat = get_nbr(av[5]);
	else
		vars.must2eat = -1;
	if (vars.philo_num < 1 || vars.time2die < 0 || vars.time2eat < 0
		|| vars.time2sleep < 0)
		return (-1);
	else
		return (philo_allocation(&vars));
}

static int	philo(int ac, char **av)
{
	int	i;

	i = 1;
	while (i < ac)
	{
		if (get_nbr(av[i]) == -1)
			return (ft_close(NULL, arg_error));
		i++;
	}
	if (philo_set_vars(ac, av) == -1)
		return (ft_close(NULL, arg_error));
	return (philo_set_vars(ac, av));
}

int	main(int ac, char **av)
{
	t_vars	vars;

	vars.flag = 0;
	vars.max_mealstimes = 0;
	if (ac == 5 || ac == 6)
		return (philo(ac, av));
	else
		return (ft_close(NULL, arg_error));
}
