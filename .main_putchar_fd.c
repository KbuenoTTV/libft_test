/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_putstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchichep <jchichep@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 14:16:07 by jchichep          #+#    #+#             */
/*   Updated: 2014/11/07 16:51:46 by jchichep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int main()
{
	int fd;

	fd = open("./fichier", O_RDWR | O_CREAT);

	ft_putchar_fd('C', fd);
	ft_putchar_fd('\n', fd);
	close(fd);
}
