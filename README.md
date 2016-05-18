# CPE_colle_boggle

Colle Boggle :
L'objectif est de recréer un jeu de boggle en C. Le programme prend en paramètre le chemin d'un dictionnaire contenant les mots qui vont être ajoutés à la grille sur des positions aléatoires (utilisation : "./realboggle dico/dico1.en"). Le joueur peut ensuite rentrer les mots qu'il pense avoir trouvé et le programme lui indique s'il est juste ou non. Lorsqu'un mot est trouvé le programme remplace les lettres du mot par des '-' dans la grille.

Partie réalisé :
- Le programme affiche la grille remplie de lettres aléatoires et ajoute les mots du dictionnaire passé en paramètre de façon aléatoire.

- L'utilisateur peut rentré les mots qu'il repère, s'il est contenu dans le dictionnaire il sera retiré de la liste, s'il n'est pas dans le dictionnaire un message est affiché et l'utilisateur est invité à retrer un nouveau mot.

- Lorsque le joueur à trouvé tous les mots du dicitonnaire un message de victoire s'affiche.

- Gestion du Ctr+D, lorsqu'un mot est trop long, lorsqu'il y à trop de caractères (+ de 200), lorsqu'il y a autre chose que des lettres minuscules dans le dico, lorsque le chemin passé en paramètre est incorrect.

Partie à faire :
- Si le dico envoyé est vide, affichage des '-' lorsque le mot est trouvé (le mot est bien comptabilisé mais n'est pas mis en évidence), les mots peuvent se superposer les uns sur les autres (à régler).