/**
 * _exec - execve the comands from line.
 * @cmd: first Command to execute.
 * @command: another Command to execute.
 * @env: string
 *
 * Return: 0.
 */




int exec_cmd(char *cmd)
{
  pid_t pid, wpid;
  int status;

  pid = fork();
  if (pid == 0) {
    // Child process
    if (execv(*cmd, cmd, env) == -1) {
      perror("error");
    return (EXIT_FAILURE);
  }
  }
  else{
  // Parent process
      waitpid(pid, &status, WUNTRACED);
  }

  return (0);
}

