#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(610, 840, "zeros");
	int ***C = create_three_dim_int(750, 40, 320, "zeros");
	int **B = create_two_dim_int(950, 870, "zeros");

	for (int c = 0; c < 320; c++)
	  for (int b = 0; b < 40; b++)
	    for (int a = 0; a < 749; a++)
	    {
	      
	      B[a][b]=C[a][b][c]*27;
	      C[a][b][c]=C[a+1][b][c]+B[a][b];
	    }

    return 0;
}