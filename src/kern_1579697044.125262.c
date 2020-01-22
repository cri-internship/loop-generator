#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(30, 770, "ones");
	double **E = create_two_dim_double(430, 390, "ones");
	double **C = create_two_dim_double(210, 460, "ones");
	double **D = create_two_dim_double(390, 230, "ones");
	double ***B = create_three_dim_double(690, 20, 380, "ones");

	for (int c = 0; c < 380; c++)
	  for (int b = 4; b < 15; b++)
	    for (int a = 1; a < 390; a++)
	    {
	      
	      D[a][b]=D[a-1][b-4]/0.685;
	      
	      double var_a=B[a][b][c]/0.504;
	      double var_b=B[a+4][b+5][c]/0.132;
	    }

    return 0;
}