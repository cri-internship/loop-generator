#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **C = create_two_dim_double(580, 970, "random");
	double ***D = create_three_dim_double(1000, 800, 300, "random");
	double **E = create_two_dim_double(250, 420, "random");
	double *A = create_one_dim_double(730, "random");
	double **B = create_two_dim_double(240, 190, "random");

	for (int d = 1; d < 300; d++)
	  for (int c = 3; c < 420; c++)
	    for (int b = 4; b < 250; b++)
	      for (int a = 4; a < 250; a++)
	      {
	        
	       A[a]=D[a][b][c]-E[a][b]+C[a][b]*B[a][b];
	       C[a][b]=A[a]*0.447/E[a][b];
	        
	       D[a][b][c]=D[a-4][b-2][c-1]-A[a]/A[a]*E[a][b];
	        
	       E[a][b]=0.94;
	       E[a-3][b]=0.44;
	        
	       double var_a=C[a][b]*0.204;
	       double var_b=C[a-1][b-3]-0.332;
	      }

    return 0;
}