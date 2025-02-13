/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renrodri <renrodri@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 13:38:05 by renrodri          #+#    #+#             */
/*   Updated: 2025/02/13 16:56:42 by renrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H

# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include <stdio.h>
# include <sys/wait.h>
# include <fcntl.h>

# include <libft.h>

char	*find_command_path(char *cmd, char **envp);
void	execute_command(char **cmd, char **envp);
void	handle_child_process(char *input_file, char **cmd1, \
				char **envp, int *fd);
void	handle_parent_process(char *output_file, char **cmd2, \
				char **envp, int *fd);
void	cleanup(char **args, char *path, char **paths);
void	error(void);
void	display_argument_error(void);
void	free_paths(char **paths);
char	*join_paths(char *dir, char *cmd);

#endif
