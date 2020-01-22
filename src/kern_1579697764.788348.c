#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **E = create_two_dim_double(770, 310, "ones");
	double **A = create_two_dim_double(50, 790, "ones");
	double *B = create_one_dim_double(690, "ones");
	double **D = create_two_dim_double(980, 920, "ones");
	double ***C = create_three_dim_double(200, 60, 370, "ones");

	for (int c = 0; c < 369; c++)
	  for (int b = 2; b < 59; b++)
	    for (int a = 5; a < 50; a++)
	    {
	      
	      A[a][b]=A[a][b-2]+E[a][b]*B[a];
	      
	      B[a]=A[a][b]-C[a][b][c]+E[a][b]/D[a][b];
	      
	      C[a][b][c]=C[a][b][c+1]-A[a][b]+E[a][b];
	      
	      B[a]=E[a][b]-D[a][b];
	      
	      E[a][b]=0.243;
	      E[a+4][b+3]=0.501;
	      
	      C[a][b][c]=0.47;
	      
	      double var_a=B[a]/0.066;
	      double var_b=B[a-5]/0.637;
	    }

    return 0;
}