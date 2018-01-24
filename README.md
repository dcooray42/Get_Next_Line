# Get_Next_Line

Troisième et dernier projet générique de l'école 42. Tous les projets qui suivront seront repartis, pour la plupart, 
dans 4 grandes branches : UNIX/Sécurité, Algorithmie, Graphique et Web. Get_Next_Line est un projet qui consiste a crée 
une fonction qui va parcourir un fichier et retourner une seule ligne.

## Pour commencer

Ces instructions vous aiderons a avoir une copie du projet et de pouvoir le faire marcher sur votre ordinateur.

### Prérequis

Ce que vous devez faire pour télécharger les fichiers sources afin de pouvoir les compiler par la suite

```
git clone https://github.com/konamifox/Get_Next_Line.git [nom du PATH/dossier]
```

### Installation

Contrairement aux deux projets précédents, le fichier get_next_line.c sera a compilé avec vos fichiers sources pour pouvoir 
l'utiliser.

Se placer dans le dossier dans lequel vous avez fait la copie des fichiers sources du projet puis rentrer la commande suivante

```
make -C libft
```
Plusieurs fichiers .o auront fait leur apparitions ainsi que la librairie statique

```
libft.a
```

Dans le dossier libft qui se trouve dans dans celui qui vous avez clonez. 

### Suppression

Pour supprimer les fichiers objets .o généré lors de la création de la librairie

```
make -C libft clean
```

Pour supprimer les fichiers objets .o et la librairie libft.a

```
make -C libft fclean
```

Pour tout supprimer puis recompiler la librairie

```
make -C libft re
```

## Faire des tests

Aucun test n'est fournis avec ce projet. Toutefois vous pouvez crée un binaire avec vos propres fichiers sources et la 
librairie précédemment créer.

### Compilation avec le fichier get_next_line.c

Amenager vos fichiers sources et headers dans un dossier unique de tel sorte à ce que la commande suivante fonctionne

```
gcc -Wall -Werror -Wextra -I [PATH du dossier cloné] -I [PATH du dossier cloné/libft/includes] -L [PATH du dossier cloné/libft] -lft *.c -o [nom de votre binaire]
```

#### Exemple de main.c pour afficher le contenu d'un fichier

```c
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include "get_next_line.h"

int	main(int argc, char **argv)
{
	int	fd;
	char	*str = NULL;
	
	if (argc == 2)
	{
		if ((fd = open(argv[1], O_RDONLY)) == -1)
			return (0);
		while (get_next_line(fd, &str))
		{
			printf("%s\n", str);
			ft_strdel(&str);
		}
		if (close(fd) == -1)
			return (0);
	}
	else
		printf("More than one parameter\n");
	return (0);
}
```

## Auteur

* **Dimitri Cooray** - [Lien vers github](https://github.com/konamifox)
