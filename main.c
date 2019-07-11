/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahenry <ahenry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/05 02:29:22 by ahenry            #+#    #+#             */
/*   Updated: 2019/07/11 02:51:40 by ahenry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		main(int argc, char **argv)
{
	int exo;

	if (argc >= 2)
		exo = atoi(argv[1]);
	else
		exo = -1;
	if (exo >= 0)
	{
		printf("ex00 : ");
	}
	if (exo >= 1)
	{
		printf("\nex01 : ");
	}
	if (exo >= 2)
	{
		printf("\nex02 : ");
	}
	if (exo >= 3)
	{
		printf("\nex03 : ");
	}
	if (exo >= 4)
	{
		printf("\nex04 : ");
	}
	if (exo >= 5)
	{
		printf("\nex05 : ");
	}
	if (exo >= 6)
	{
		printf("\nex06 : ");
	}
	if (exo >= 7)
	{
		printf("\nex07 : ");
	}
	if (exo >= 8)
	{
		printf("\nex08 : ");
	}
	return (0);
}
