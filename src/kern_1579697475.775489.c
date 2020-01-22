#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***C = create_three_dim_double(280, 940, 590, "random");
	double *A = create_one_dim_double(980, "random");
	double ***B = create_three_dim_double(70, 630, 230, "random");

	for (int c = 2; c < 588; c++)
	  for (int b = 2; b < 940; b++)
	    for (int a = 3; a < 276; a++)
	    {
	      
	      C[a][b][c]=C[a+4][b][c+2]*B[a][b][c];
	      
	      double var_a=C[a][b][c]+0.453;
	      double var_b=C[a-3][b-2][c-2]-0.302;
	    }

    return 0;
}