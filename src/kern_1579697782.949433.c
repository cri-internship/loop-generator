#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***E = create_three_dim_double(1000, 990, 420, "random");
	double **C = create_two_dim_double(930, 710, "random");
	double *A = create_one_dim_double(300, "random");
	double *D = create_one_dim_double(830, "random");
	double *B = create_one_dim_double(850, "random");

	for (int d = 0; d < 850; d++)
	  for (int c = 0; c < 850; c++)
	    for (int b = 0; b < 850; b++)
	      for (int a = 0; a < 850; a++)
	      {
	        
	       D[a]=B[a]/C[a][b];
	       E[a][b][c]=B[a]-D[a]*A[a]+E[a][b][c]/0.242;
	      }

    return 0;
}