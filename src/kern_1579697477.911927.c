#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **C = create_two_dim_double(330, 230, "zeros");
	double **A = create_two_dim_double(430, 780, "zeros");
	double ***B = create_three_dim_double(120, 480, 100, "zeros");

	for (int c = 3; c < 100; c++)
	  for (int b = 0; b < 480; b++)
	    for (int a = 0; a < 120; a++)
	    {
	      
	      B[a][b][c]=B[a][b][c-3]-0.006;
	    }

    return 0;
}