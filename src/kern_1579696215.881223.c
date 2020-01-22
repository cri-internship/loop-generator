#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(100, 900, "random");
	double ***C = create_three_dim_double(1000, 180, 340, "random");
	double **A = create_two_dim_double(540, 680, "random");
	double ***D = create_three_dim_double(340, 910, 410, "random");

	for (int b = 4; b < 176; b++)
	  for (int a = 3; a < 98; a++)
	  {
	    
	     D[a][b][a]=D[a-3][b][a-2]-B[a][b];
	    
	     D[a][b][a]=D[a][b][a-3]-0.061;
	    
	     C[a][b][a]=C[a+2][b+4][a+1]*0.579;
	    
	     B[a][b]=B[a+2][b]/C[a][b][a]+A[a][b]*D[a][b][a];
	    
	     double var_a=B[a][b]+0.198;
	     double var_b=B[a-1][b-4]-0.551;
	  }

    return 0;
}