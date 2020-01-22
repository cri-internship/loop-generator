#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *D = create_one_dim_int(830, "zeros");
	int **E = create_two_dim_int(120, 590, "zeros");
	int *A = create_one_dim_int(500, "zeros");
	int **C = create_two_dim_int(140, 110, "zeros");
	int ***B = create_three_dim_int(800, 970, 930, "zeros");

	for (int c = 0; c < 110; c++)
	  for (int b = 2; b < 140; b++)
	    for (int a = 2; a < 140; a++)
	    {
	      
	      C[a][b]=C[a-2][b]+A[a];
	      
	      int var_a=C[a][b]*45;
	    }

    return 0;
}