#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(560, 910, "ones");
	double **E = create_two_dim_double(390, 540, "ones");
	double **C = create_two_dim_double(380, 240, "ones");
	double ***A = create_three_dim_double(220, 660, 820, "ones");
	double **D = create_two_dim_double(340, 360, "ones");

	for (int c = 0; c < 820; c++)
	  for (int b = 4; b < 240; b++)
	    for (int a = 4; a < 220; a++)
	    {
	      
	      B[a][b]=B[a][b-2]-0.019;
	      
	      A[a][b][c]=A[a-3][b-2][c]/D[a][b];
	      
	      D[a][b]=D[a+2][b]-0.601;
	      
	      D[a][b]=D[a+4][b+3]-A[a][b][c]/0.18*E[a][b];
	      
	      C[a][b]=0.847;
	      C[a-4][b-1]=0.747;
	      
	      double var_a=C[a][b]/0.019;
	      double var_b=C[a][b-4]-0.262;
	      
	      double var_c=C[a][b]*0.575;
	      double var_d=C[a-4][b-1]-0.413;
	    }

    return 0;
}