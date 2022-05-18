#include "shell.h"
/**
* bridge - will check to see  if we are dealing with a builtin or not
* @check: figures out what to execute
* @args: Arguments passed from and line broken up
* Return: 1 if user entered a path/builtin, 2 if user entered a binary
*/
int bridge(char *check, char **args)
{
int i = 0;
if (builtins_checker(args) == 1)
return (1);
while (check[i] != '\0')
{
if (check[i] == '/')
return (1);
i++;
}
return (2);
}
