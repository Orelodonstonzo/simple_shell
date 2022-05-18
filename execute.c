#include "shell.h"
/**
* execute_prog - Execute binary ot builtin
* @args: Argument buffer
* @line: line buffer
* @env: environment
* @flow: Helps decide what code to run
* Return: if success
*/
int execute_prog(char **args, char *line, char **env, int flow)
{
int status;
if (args[0] == NULL)
return (1);
if (flow == 1)
{
if (check_for_builtins(args, line, env) == 1)
return (1);
}
status = launch_prog(args);
return (status);
}
