int check_builtin(char **command)
{
    built_in built[] = {
            {"cd", change_dir}
            {"env", fun_env},
            {NULL, NULL}
};

if (*command == NULL)
	{
		return (-1);
	}
int i = 0;
   while (built[i]->cmd){
    if (_strcmp(command[0], built[i]->cmd) == 0) {
      return (1);
    }
    i++;
  }

  return (-1);
}




int fun_builtin(char *command)
{
    built_in built[] = {
            {"cd", change_dir}
            {"env", fun_env},
            {NULL, NULL}
};
int i = 0;
   while (built[i]->cmd) {
    if (_strcmp(command[0], built[i]->cmd) == 0) {
      return (built[i]->fun(command));
    }
    i++;
  }

  return (-1);
}

