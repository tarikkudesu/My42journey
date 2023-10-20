/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulcaid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 11:49:51 by ooulcaid          #+#    #+#             */
/*   Updated: 2023/10/02 11:51:05 by ooulcaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "headers/ft_header.h"

int	main(int argc, char **argv)
{
	t_bsq	*bsq;

	bsq = create_b();
	if (bsq == NULL)
	{
		put_str("initializing error\n");
		return (0);
	}
	else
	{
		if (argc >= 2)
			bsq = get_result_file(bsq, argv + 1);
		else
			bsq = get_result_in(bsq);
		print_result(bsq->map);
	}
	return (0);
}
