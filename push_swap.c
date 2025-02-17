/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmo-lo <polmo-lo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 15:26:15 by polmo-lo          #+#    #+#             */
/*   Updated: 2024/11/14 18:45:13 by polmo-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int *parse(int argc, char **argv, t_stack *data)
{
	int		*numbers;
	int		i;
	int
	long	num;
	
	i = 1;
	numbers = malloc((argc -1) * sizeof(int));
	if(!numbers)
		return NULL;
	while(i < argc)
	{
			if(isnum(argv[i]) == 0)
			{
				printf("Invalid arguments");
				ft_free(numbers);
				return (0);
			}
			num = atol(argv[i]);
			if(num < INT_MIN || num > INT_MAX)
				printf("Numeros fuera de rango pute");
				free(numbers);
				return NULL;
			i++;
			numbers[i-1] = (int)num;
			j = 0;
			
	}
}

int main(int argc, char **argv)
{
	t_stack data;

	if(argc < 2)
		return 0;
	parse(argc, argv, &data);
}