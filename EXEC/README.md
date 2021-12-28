# ProgSys - exec

## Commande Eeec :

Les appels système exec* permettent de remplacer l'image
courante du processus par un autre programme.
exec* ne retourne jamais. Il en existe plusieurs variantes
(execlp, execve...) pour lesquelles il faut combiner les lettres
suivantes :</br>
### v : si des tableaux sont passés en argument
### l : si des listes sont passées
### p : si seul le nom de fichier est donné
### e : si l'env est passé en argument
