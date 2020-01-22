#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***C = create_three_dim_double(530, 920, 290, "random");
	double **A = create_two_dim_double(740, 610, "random");
	double *D = create_one_dim_double(900, "random");
	double *B = create_one_dim_double(170, "random");
	double *E = create_one_dim_double(320, "random");

	for (int d = 5; d < 290; d++)
	  for (int c = 3; c < 610; c++)
	    for (int b = 4; b < 320; b++)
	      for (int a = 4; a < 320; a++)
	      {
	        
	       A[a][b]=A[a-4][b-3]*C[a][b][c]-B[a]/D[a]+E[a];
	        
	       C[a][b][c]=C[a-2][b][c-5]/0.199;
	        
	       D[a]=E[a]*A[a][b];
	       A[a][b]=E[a-1]/A[a][b]+C[a][b][c]-D[a]*B[a];
	      }

    return 0;
}