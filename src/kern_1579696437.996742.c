#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(440, 670, "ones");
	double **B = create_two_dim_double(650, 610, "ones");
	double ***D = create_three_dim_double(240, 280, 460, "ones");
	double ***E = create_three_dim_double(530, 90, 80, "ones");
	double **C = create_two_dim_double(460, 510, "ones");

	for (int c = 0; c < 460; c++)
	  for (int b = 4; b < 280; b++)
	    for (int a = 0; a < 238; a++)
	    {
	      
	      C[a][b]=C[a+2][b]+E[a][b][c]/A[a][b];
	      
	      A[a][b]=0.186*B[a][b]/C[a][b];
	      A[a+2][b+1]=C[a][b]/E[a][b][c];
	      
	      D[a][b][c]=D[a][b][c]/C[a][b]+A[a][b]-E[a][b][c];
	      A[a][b]=D[a+2][b][c]+C[a][b]-B[a][b];
	      
	      double var_a=C[a][b]+0.242;
	      double var_b=C[a][b+4]-0.984;
	      
	      double var_c=B[a][b]-0.991;
	      double var_d=B[a][b-4]-0.076;
	    }

    return 0;
}