#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *C = create_one_dim_double(260, "random");
	double **B = create_two_dim_double(90, 570, "random");
	double ***A = create_three_dim_double(860, 750, 90, "random");

	for (int c = 0; c < 567; c++)
	  for (int b = 0; b < 89; b++)
	    for (int a = 0; a < 89; a++)
	    {
	      
	      C[a]=C[a+3]+B[a][b]/A[a][b][c];
	      
	      C[a]=C[a+4]-0.387*B[a][b];
	      
	      C[a]=B[a][b]/C[a]*C[a];
	      A[a][b][c]=B[a+1][b+3]+A[a][b][c]-C[a];
	    }

    return 0;
}