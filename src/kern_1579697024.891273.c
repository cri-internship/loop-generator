#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **C = create_two_dim_int(360, 760, "zeros");
	int **A = create_two_dim_int(830, 700, "zeros");
	int **B = create_two_dim_int(590, 690, "zeros");

	for (int c = 3; c < 760; c++)
	  for (int b = 5; b < 360; b++)
	    for (int a = 5; a < 360; a++)
	    {
	      
	      C[a][b]=C[a-5][b-3]-A[a][b]*B[a][b];
	    }

    return 0;
}