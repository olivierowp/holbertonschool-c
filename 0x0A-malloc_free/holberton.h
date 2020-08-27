#ifndef HOLBERTON_H
#define HOLBERTON_H

int _putchar(char c);
char *create_array(unsigned int size, char c);
int _strlen(char *s);
char *_strdup(char *str);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);

#endif /* HOLBERTON_H */
