/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltongid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 16:26:36 by eltongid          #+#    #+#             */
/*   Updated: 2023/04/11 16:26:41 by eltongid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <fcntl.h>

int	main(void)
{
	char	*line;
	int		fd;
	int i = 0;

	fd = open("textfile.txt", O_RDONLY);
	if (fd == -1)
		exit(1);
	//line = get_next_line(fd);
	while ((line = get_next_line(fd)))
	{
		if (i == 2)
			close(fd);
		printf("returned line : %s", line);
		free(line);
		i++;
	}
	printf("returned line : %s", line);
	printf("returned line : %s", line);
	fd = open("textfile.txt", O_RDONLY);
	line = get_next_line(fd);
	printf("returned line : %s", line);
	line = get_next_line(fd);
	printf("returned line : %s", line);
	
	// printf("%s", get_next_line(fd));
	close(fd);
	return (0);
}*/
