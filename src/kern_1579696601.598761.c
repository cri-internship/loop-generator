#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **C = create_two_dim_int(140, 230, "zeros");
	int ***A = create_three_dim_int(190, 470, 390, "zeros");
	int **B = create_two_dim_int(640, 610, "zeros");
	int *D = create_one_dim_int(60, "zeros");

	for (int c = 0; c < 610; c++)
	  for (int b = 4; b < 60; b++)
	    for (int a = 4; a < 60; a++)
	    {
	      
	      D[a]=D[a-4]-19;
	      
	      B[a][b]=B[a+2][b]*37;
	    }

    return 0;
}