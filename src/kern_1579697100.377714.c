#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(930, "zeros");
	double ***C = create_three_dim_double(360, 310, 650, "zeros");
	double **A = create_two_dim_double(720, 70, "zeros");

	for (int c = 0; c < 650; c++)
	  for (int b = 2; b < 69; b++)
	    for (int a = 5; a < 355; a++)
	    {
	      
	      A[a][b]=A[a-5][b-2]+C[a][b][c];
	      
	      double var_a=B[a]*0.033;
	      B[a]=0.192;
	      
	      A[a][b]=B[a]-A[a][b];
	      C[a][b][c]=B[a-1]-C[a][b][c]+A[a][b];
	      
	      double var_b=B[a]/0.221;
	      double var_c=B[a+2]+0.337;
	      
	      B[a]=A[a][b]+B[a];
	      C[a][b][c]=A[a+2][b+1]*B[a];
	      
	      A[a][b]=C[a][b][c]*A[a][b];
	      A[a][b]=C[a+5][b+4][c]-A[a][b]+B[a];
	    }

    return 0;
}