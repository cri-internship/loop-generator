#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(840, 280, 710, "zeros");
	double *D = create_one_dim_double(270, "zeros");
	double ***A = create_three_dim_double(100, 20, 940, "zeros");
	double ***C = create_three_dim_double(790, 860, 940, "zeros");

	for (int c = 2; c < 710; c++)
	  for (int b = 2; b < 280; b++)
	    for (int a = 5; a < 840; a++)
	    {
	      
	      B[a][b][c]=B[a-5][b-2][c-2]*0.842;
	      
	      double var_a=B[a][b][c]/0.349;
	      double var_b=B[a-2][b-1][c]+0.674;
	    }

    return 0;
}