#include <stdio.h>
#include "ft_sort_integer_table.h"

int main ()
{
	int tab[] = {18089, 13457, 5116, 19705, 29850, 4481, 27811, 38862, 15003, 5867, 19926,16994, 5000, 39863, 2301, 27936, 29366, 36714, 36232, 30916, 21836} ;
	int size = 21;
	ft_sort_integer_table(tab, size);
	printf("%d, %d, %d, %d, %d\n", tab[0],tab[1],tab[2],tab[3],tab[4]);
}
