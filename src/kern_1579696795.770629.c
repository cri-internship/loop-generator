#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **D = create_two_dim_double(450, 850, "zeros");
	double ***A = create_three_dim_double(820, 60, 440, "zeros");
	double ***B = create_three_dim_double(840, 430, 290, "zeros");
	double ***C = create_three_dim_double(880, 180, 50, "zeros");

	for (int c = 1; c < 440; c++)
	  for (int b = 1; b < 60; b++)
	    for (int a = 1; a < 820; a++)
	    {
	      
	      double var_a=A[a][b][c]+0.529;
	      double var_b=A[a-1][b-1][c-1]/0.771;
	    }

    return 0;
}