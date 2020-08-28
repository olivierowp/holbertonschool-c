#ifndef HOLBERTON_H
#define HOLBERTON_H

int _putchar(char c);
char *create_array(unsigned int size, char c);
char *str_concat(char *s1, char *s2);
int _strlen(char *s);
char *_strdup(char *str);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
char *argstostr(int ac, char **av);
int countWords(char *str);
char *copyWord(char *start, char *end, int size);
char **strtow(char *str);

#endif /* HOLBERTON_H */
