#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *D = create_one_dim_double(800, "zeros");
	double **C = create_two_dim_double(440, 800, "zeros");
	double ***A = create_three_dim_double(830, 50, 400, "zeros");
	double ***B = create_three_dim_double(80, 700, 130, "zeros");

	for (int c = 1; c < 800; c++)
	  for (int b = 1; b < 440; b++)
	    for (int a = 1; a < 440; a++)
	    {
	      
	      C[a][b]=0.387;
	      C[a-1][b-1]=0.381;
	    }

    return 0;
}