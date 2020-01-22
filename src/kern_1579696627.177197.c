#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *C = create_one_dim_double(280, "random");
	double ***B = create_three_dim_double(500, 630, 490, "random");
	double ***A = create_three_dim_double(780, 870, 690, "random");

	for (int c = 0; c < 486; c++)
	  for (int b = 0; b < 630; b++)
	    for (int a = 0; a < 279; a++)
	    {
	      
	      C[a]=C[a+1]-B[a][b][c];
	      
	      double var_a=B[a][b][c]/0.028;
	      double var_b=B[a+2][b][c+4]*0.737;
	    }

    return 0;
}