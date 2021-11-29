#include "tester.h"

char *ft_strjoin(char *str, char *add)
{
	char	*result;
	int		len;

	len = 0;
	len = strlen(str) + strlen(add);
	
	result = (char *)malloc(len + 2);
	strcpy(result, str);
	strcat(result, add);
	free(str);
	return (result);
}

char *func_return(char *args[])
{
	// char	*args[] = {"../../testout", NULL};
	int		fd[2];
	pid_t	pid;
	int		pid_ret;
	char	*str_ret;
	int read_ret = 0;

	if (pipe(fd) != 0)
		perror("pipe"), exit(-1);
	dup2(fd[WRITE], STDOUT_FILENO);
	close(fd[WRITE]);

	pid = fork();
	if (pid < 0)
		perror("pid"), exit(-1);
	if (pid == 0)
	{
		close(fd[READ]);
		if ( e+p(args[0], args) != 0)
			perror("execvp"), exit(-1);
	}
	else
	{
		wait(&pid_ret);
		if (pid_ret != 0)
			fprintf(stderr, "child status: %d\n", WEXITSTATUS(pid_ret)), exit(-1); 
		char str[1];
		read(fd[READ], str, 1);
		str_ret = strdup(str);
		// fprintf(stderr, "str = [%s]", str_ret);
		while (str[0] != '\n' && str[0] != '\0')
		{
			if ((read_ret = read(fd[READ], str, 1)) == -1)
				exit (-1);
			if (read_ret != 1)
				fprintf(stderr, "read_ret = %d\n", read_ret);
			str_ret = ft_strjoin(str_ret, str);
			// fprintf(stderr, "str = [%s]", str_ret);
		}
		close(fd[READ]);
	}
	return (str_ret);
}

void ex00_test01()
{
	int n = 1;
	char *args[] = {"../ex00/megaphone", "Ola", NULL};
	char *expected = "OLA\n";

	char *result;

	fprintf(stderr, "%stest %.2d ... %s", BWHT, n, WHT);
	result = func_return(args);
	if (strcmp(expected, result) == 0)
		fprintf(stderr, "%sOK!%s\n", BGRN, WHT);
	else
	{
		fprintf(stderr, "%sFAIL!%s\t", BRED, WHT);
		fprintf(stderr, "[%s] != [%s]\n", expected, result);
	}
	free(result);
}

void ex00_test02()
{
	int n = 2;
	char *args[] = {"../ex00/megaphone", "hello", NULL};
	char *expected = "HELLO\n";

	char *result;

	fprintf(stderr, "%stest %.2d ... %s", BWHT, n, WHT);
	result = func_return(args);
	if (strcmp(expected, result) == 0)
		fprintf(stderr, "%sOK!%s\n", BGRN, WHT);
	else
	{
		fprintf(stderr, "%sFAIL!%s\t", BRED, WHT);
		fprintf(stderr, "[%s] != [%s]\n", expected, result);
	}
	free(result);
}

void ex00_test03()
{
	int n = 3;
	char *args[] = {"../ex00/megaphone", "shhhhh... I think the students are asleep...", NULL};
	char *expected = "SHHHHH... I THINK THE STUDENTS ARE ASLEEP...\n";

	char *result;

	fprintf(stderr, "%stest %.2d ... %s", BWHT, n, WHT);
	result = func_return(args);
	if (strcmp(expected, result) == 0)
		fprintf(stderr, "%sOK!%s\n", BGRN, WHT);
	else
	{
		fprintf(stderr, "%sFAIL!%s\t", BRED, WHT);
		fprintf(stderr, "[%s] != [%s]\n", expected, result);
	}
	free(result);
}

void ex00_test04()
{
	int n = 4;
	char *args[] = {"../ex00/megaphone", "Damnit", " ! ", "Sorry students, I thought this thing was off.", NULL};
	char *expected = "DAMNIT ! SORRY STUDENTS, I THOUGHT THIS THING WAS OFF.\n";

	char *result;

	fprintf(stderr, "%stest %.2d ... %s", BWHT, n, WHT);
	result = func_return(args);
	if (strcmp(expected, result) == 0)
		fprintf(stderr, "%sOK!%s\n", BGRN, WHT);
	else
	{
		fprintf(stderr, "%sFAIL!%s\t", BRED, WHT);
		fprintf(stderr, "[%s] != [%s]\n", expected, result);
	}
	free(result);
}

void ex00_test05()
{
	int n = 5;
	char *args[] = {"../ex00/megaphone", NULL};
	char *expected = "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";

	char *result;

	fprintf(stderr, "%stest %.2d ... %s", BWHT, n, WHT);
	result = func_return(args);
	if (strcmp(expected, result) == 0)
		fprintf(stderr, "%sOK!%s\n", BGRN, WHT);
	else
	{
		fprintf(stderr, "%sFAIL!%s\t", BRED, WHT);
		fprintf(stderr, "[%s] != [%s]\n", expected, result);
	}
	free(result);
}

void ex00_test06()
{
	int n = 6;
	char *args[] = {"../ex00/megaphone", "A", NULL};
	char *expected = "A\n";

	char *result;

	fprintf(stderr, "%stest %.2d ... %s", BWHT, n, WHT);
	result = func_return(args);
	if (strcmp(expected, result) == 0)
		fprintf(stderr, "%sOK!%s\n", BGRN, WHT);
	else
	{
		fprintf(stderr, "%sFAIL!%s\t", BRED, WHT);
		fprintf(stderr, "[%s] != [%s]\n", expected, result);
	}
	free(result);
}

void ex00_test_list()
{
	fprintf(stderr, "\n%s------------------\n", BGRN);
	fprintf(stderr, "       ex00       \n");
	fprintf(stderr, "------------------%s\n", WHT);
	
	ex00_test01();
	ex00_test02();
	ex00_test03();
	ex00_test04();
	ex00_test05();
	ex00_test06();
}

int main(void)
{
	ex00_test_list();
	return (0);
}