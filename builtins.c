#include "shell.h"
/**
* exit_shell - this will run the builtin exit
* @line: line buffer of user input
* @args: arguments form user
* @env: environment
* Return: void
*/
void exit_shell(char **args, char *line, char **env)
{
free(args);
free(line);
(void)env;
exit(0);
}
/**
* env_shell - prints shell environment
* @args: arguments split from cmdline
* @line: user input buffer
* @env: environment
*/
void env_shell(char **args, char *line, char **env)
{
int size, i = 0;
while (env[i] != NULL)
{
size = _strlen (env[i]);
write(1, env[i], size);
write(1, "\n", 1);
i++;
}
(void)args;
(void)line;
}
