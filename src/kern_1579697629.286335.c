#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(580, "random");
	double ***B = create_three_dim_double(860, 770, 20, "random");
	double *C = create_one_dim_double(290, "random");

	for (int c = 0; c < 16; c++)
	  for (int b = 0; b < 770; b++)
	    for (int a = 1; a < 290; a++)
	    {
	      
	      B[a][b][c]=B[a+5][b][c+4]/A[a];
	      
	      C[a]=B[a][b][c];
	      C[a]=A[a]+B[a][b][c];
	      
	      double var_a=C[a]+0.565;
	      double var_b=C[a-1]*0.251;
	      
	      C[a]=A[a]*C[a];
	      B[a][b][c]=A[a+2]+B[a][b][c];
	    }

    return 0;
}