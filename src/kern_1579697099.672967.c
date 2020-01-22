#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(270, 420, "zeros");
	double ***C = create_three_dim_double(710, 850, 490, "zeros");
	double **A = create_two_dim_double(700, 600, "zeros");
	double **D = create_two_dim_double(530, 920, "zeros");

	for (int c = 4; c < 420; c++)
	  for (int b = 5; b < 270; b++)
	    for (int a = 5; a < 270; a++)
	    {
	      
	      B[a][b]=B[a-5][b-4]*0.134;
	      
	      A[a][b]=A[a+1][b]+0.711;
	      
	      A[a][b]=D[a][b]+C[a][b][c];
	      
	      D[a][b]=A[a][b]/B[a][b]-C[a][b][c]+D[a][b];
	      B[a][b]=A[a-5][b]*B[a][b]-D[a][b]/C[a][b][c];
	      
	      double var_a=B[a][b]-0.996;
	      double var_b=B[a][b-2]+0.971;
	    }

    return 0;
}