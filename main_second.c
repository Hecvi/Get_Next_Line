/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaurine <klaurine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 20:10:30 by klaurine          #+#    #+#             */
/*   Updated: 2020/02/09 13:45:33 by klaurine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

int		main(int argc, char **argv)
{
	char	*line;
	int		fd;
	int		string;

	if (argc != 2)
		return (0);
	string = 1000;
	fd = open(argv[1], O_RDONLY);
	while (string > 0)
	{
		get_next_line(fd, &line);
		printf("%s\n", line);
		free(line);
		line = NULL;
		string--;
	}
	return (0);
}
