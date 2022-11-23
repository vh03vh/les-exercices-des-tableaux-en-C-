#include <stdio.h>
void permuter(int *a, int *b) {
int tmp;
tmp = *a;
*a = *b;
*b = tmp;
}
void triRapid(int tab[], int first, int last) {
int pivot, i, j;
if(first < last) {
pivot = first;
i = first;
j = last;
while (i < j) {
while(tab[i] <= tab[pivot] && i < last)
i++;
while(tab[j] > tab[pivot])
j--;
if(i < j) {
permuter(&tab[i], &tab[j]);
}
}
permuter(&tab[pivot], &tab[j]);
triRapid(tab, first, j - 1);
triRapid(tab, j + 1, last);
}
}
int main() {
int tab[100], nbr, i;
printf("\n Entrer le nombre total d'éléments : ");
scanf("%d", &nbr);
printf("\n Entrer les éléments du tableau : ");
for(i = 0; i < nbr; i++)
scanf("%d", &tab[i]);
triRapid(tab, 0, nbr - 1);
printf("\n Tableau trié : ");
for(i = 0; i < nbr; i++) {
printf(" %4d", tab[i]);
}
printf("\n");
return 0;
}

