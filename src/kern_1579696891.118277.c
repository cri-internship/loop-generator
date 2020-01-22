#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *D = create_one_dim_double(90, "random");
	double ***A = create_three_dim_double(1000, 420, 880, "random");
	double *C = create_one_dim_double(650, "random");
	double *B = create_one_dim_double(680, "random");

	for (int d = 3; d < 90; d++)
	  for (int c = 3; c < 90; c++)
	    for (int b = 3; b < 90; b++)
	      for (int a = 3; a < 90; a++)
	      {
	        
	       B[a]=B[a-3]+A[a][b][c]-C[a]*D[a];
	        
	       D[a]=D[a]+B[a]*A[a][b][c]-C[a];
	       B[a]=D[a]-B[a];
	      }

    return 0;
}