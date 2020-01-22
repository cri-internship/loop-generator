#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *E = create_one_dim_double(500, "random");
	double *B = create_one_dim_double(910, "random");
	double *C = create_one_dim_double(410, "random");
	double ***D = create_three_dim_double(690, 540, 820, "random");
	double **A = create_two_dim_double(10, 740, "random");

	for (int d = 4; d < 740; d++)
	  for (int c = 5; c < 10; c++)
	    for (int b = 5; b < 10; b++)
	      for (int a = 5; a < 10; a++)
	      {
	        
	       A[a][b]=A[a-2][b-4]-0.375;
	        
	       C[a]=E[a]/0.786*A[a][b]-B[a];
	       C[a-5]=B[a]*E[a]+D[a][b][c]-A[a][b];
	      }

    return 0;
}