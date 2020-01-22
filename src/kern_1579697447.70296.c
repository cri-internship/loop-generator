#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(570, 890, "ones");
	double **D = create_two_dim_double(980, 920, "ones");
	double *B = create_one_dim_double(180, "ones");
	double ***C = create_three_dim_double(80, 940, 680, "ones");
	double ***E = create_three_dim_double(950, 580, 550, "ones");

	for (int c = 0; c < 548; c++)
	  for (int b = 1; b < 576; b++)
	    for (int a = 5; a < 947; a++)
	    {
	      
	      E[a][b][c]=E[a+3][b+4][c+2]*0.613;
	      
	      double var_a=D[a][b]*0.316;
	      double var_b=D[a-5][b-1]+0.461;
	    }

    return 0;
}