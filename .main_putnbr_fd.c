/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_putstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchichep <jchichep@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 14:16:07 by jchichep          #+#    #+#             */
/*   Updated: 2014/11/07 17:27:41 by jchichep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int main(int argc, char **av)
{
	int fd;

	fd = open("./fichier", O_RDWR | O_CREAT);
	if (av[1][0] == '1')
		ft_putnbr_fd(0, fd);
	else if (av[1][0] == '2')
		ft_putnbr_fd(-2147483648, fd);
	else
		ft_putnbr_fd(2147483647, fd);
	write(fd, "\n", 1);
	close(fd);
	return (0);
}
