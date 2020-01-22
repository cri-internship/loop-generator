#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(950, 960, "ones");
	double **B = create_two_dim_double(180, 560, "ones");
	double *D = create_one_dim_double(980, "ones");
	double ***C = create_three_dim_double(360, 920, 50, "ones");

	for (int c = 0; c < 48; c++)
	  for (int b = 3; b < 558; b++)
	    for (int a = 2; a < 177; a++)
	    {
	      
	      A[a][b]=A[a][b+1]-D[a]+C[a][b][c];
	      
	      B[a][b]=A[a][b]+D[a]*A[a][b];
	      B[a+3][b]=0.186/A[a][b];
	      
	      B[a][b]=0.77;
	      
	      double var_a=B[a][b]+0.501;
	      double var_b=B[a+3][b+2]-0.022;
	      
	      double var_c=C[a][b][c]+0.443;
	      double var_d=C[a+2][b+1][c+2]+0.481;
	      
	      A[a][b]=B[a][b]+A[a][b]*D[a]-C[a][b][c];
	      D[a]=B[a-2][b-3]*C[a][b][c]/D[a];
	      
	      double var_e=B[a][b]/0.517;
	      double var_f=B[a+2][b+2]/0.91;
	    }

    return 0;
}