/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfurst <nfurst@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/25 15:01:49 by nfurst            #+#    #+#             */
/*   Updated: 2026/06/25 15:34:03 by nfurst           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	for (int i = 0; i < size -1; i++)
	{
		int	min;

		min = i;
		for (int j = i + 1; j < size; j++)
		{
			if (tab[j] < tab[min])
			{
				min = j;
			}
		}
		if (min != i)
		{
			int temp;

			temp = tab[min];
			tab[min] = tab[i];
			tab[i] = temp;
		}
	}
}
