/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 13:37:30 by renrodri          #+#    #+#             */
/*   Updated: 2025/04/17 23:24:57 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void	cleanup(char **args, char *path, char **paths)
{
	int	i;

	if (path)
		free(path);
	if (paths)
	{
		i = -1;
		while (paths[++i])
			free(paths[i]);
		free(paths);
	}
	if (args)
	{
		i = -1;
		while (args[++i])
			free(args[i]);
		free(args);
	}
}

char	*find_command_path(char *cmd, char **envp)
{
	char	*res;
	char	**paths;
	int		i;

	i = 0;
	while (envp[i] && ft_strnstr(envp[i], "PATH", 4) == 0)
		i++;
	if (!envp[i])
	return (NULL);
	paths = ft_split(envp[i] + 5, ':');
	i = 0;
	while (paths[i])
	{
		res = join_paths(paths[i], cmd);
		if (access(res, F_OK) == 0)
		{
			free(paths);
			return (res);
		}
		free(res);
		i++;
	}
	free_paths(paths);
	return (NULL);
}

void	execute_command(char **cmd, char **envp)
{
	char	*path;

	path = find_command_path(cmd[0], envp);
	if (!path)
	{
		ft_putstr_fd("Error: command not found\n", 2);
		ft_putstr_fd(cmd[0], 2);
		ft_putstr_fd("\n", 2);
		exit(127);
	}
	if (execve(path, cmd, envp) == -1)
	{
		perror("Error");
		exit(127);
	}
}

char	*join_paths(char *dir, char *cmd)
{
	char	*full_path;
	char	*result;

	full_path = ft_strjoin(dir, "/");
	result = ft_strjoin(full_path, cmd);
	free(full_path);
	return (result);
}

void	free_paths(char **paths)
{
	int	i;

	i = -1;
	while (paths[++i])
		free(paths[i]);
	free(paths);
}
