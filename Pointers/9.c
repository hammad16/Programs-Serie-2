#include <stdio.h>
int main()
{
  int c = 0, x = 0;
  char s[1000];

  printf("Escribe la palabra\n");
  scanf("%s", s);
	char *ps;
	ps=&s[0];
  while (*(ps+c) != '\0') {
    if (s[c] == 'a' || s[c] == 'A' || s[c] == 'e' || s[c] == 'E' || s[c] == 'i' || s[c] == 'I' || s[c] =='o' || s[c]=='O' || s[c] == 'u' || s[c] == 'U')
    x++;
    c++;
  }

  printf("Numero de vocales : %d", x);

}
