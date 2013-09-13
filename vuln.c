#include <stdio.h>

int i = 1337;
char	*test = "Chaine de test";

int	main(int ac, char **av)
{
  int	ici, la;
  char 	commentaire[200];

  printf("On imprime une chaine de test : %s qui se trouve a l'adresse %p\n", test, test);
  printf("\ni = %d = %x et se trouve a %#x\nOn compte jusqu'a %nici, puis jusqu'a %nla le nombre de bytes ecrites\n", i, i, &i, &ici, &la);
  printf("Jusqu'a ici, il y avait %d bytes et %d entre ici et la\n\n", ici, la - ici);
  printf("Maintenant, ecrivez votre commentaire sur ce programme et terminez par entree\n");
  scanf("%s", commentaire);
  printf("On peut ecrire votre commentaire de deux facons: \n\nComme ca : ");
  printf("%s", commentaire);
  printf("\n\nou comme ca : ");
  printf(commentaire);
  printf("i = %d = %x", i, i);
  printf("\n\nFin du programme\n\n");
  return (0);
}
