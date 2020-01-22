#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(190, 40, 730, "random");
	double **D = create_two_dim_double(140, 130, "random");
	double **A = create_two_dim_double(320, 170, "random");
	double ***C = create_three_dim_double(290, 230, 520, "random");

	for (int c = 0; c < 128; c++)
	  for (int b = 0; b < 135; b++)
	    for (int a = 0; a < 135; a++)
	    {
	      
	      D[a][b]=D[a+5][b+2]-B[a][b][c]+C[a][b][c]/A[a][b];
	      
	      double var_a=D[a][b]-0.133;
	      double var_b=D[a][b]/0.786;
	    }

    return 0;
}