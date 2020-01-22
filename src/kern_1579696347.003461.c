#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***C = create_three_dim_double(730, 160, 150, "ones");
	double *A = create_one_dim_double(910, "ones");
	double **B = create_two_dim_double(980, 190, "ones");

	for (int c = 0; c < 147; c++)
	  for (int b = 0; b < 158; b++)
	    for (int a = 0; a < 730; a++)
	    {
	      
	      A[a]=A[a+3]-C[a][b][c]+B[a][b];
	      
	      A[a]=B[a][b]-0.971;
	      
	      B[a][b]=0.427;
	      B[a+3][b]=0.468;
	      
	      C[a][b][c]=A[a]-B[a][b];
	      C[a][b+2][c+3]=B[a][b]-A[a];
	    }

    return 0;
}