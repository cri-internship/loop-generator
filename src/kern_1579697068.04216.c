#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***C = create_three_dim_double(670, 730, 590, "random");
	double *B = create_one_dim_double(770, "random");
	double **D = create_two_dim_double(570, 140, "random");
	double *A = create_one_dim_double(160, "random");
	double *E = create_one_dim_double(750, "random");

	for (int d = 4; d < 770; d++)
	  for (int c = 4; c < 770; c++)
	    for (int b = 4; b < 770; b++)
	      for (int a = 4; a < 770; a++)
	      {
	        
	       B[a]=B[a-3]-0.791;
	        
	       C[a][b][c]=B[a]-D[a][b]+E[a]/C[a][b][c];
	       A[a]=B[a-4]*A[a]+D[a][b]-A[a];
	      }

    return 0;
}