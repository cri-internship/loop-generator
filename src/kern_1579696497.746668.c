#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(240, 290, "ones");
	double ***C = create_three_dim_double(160, 530, 200, "ones");
	double *E = create_one_dim_double(20, "ones");
	double ***D = create_three_dim_double(590, 180, 300, "ones");
	double *A = create_one_dim_double(730, "ones");

	for (int d = 0; d < 196; d++)
	  for (int c = 3; c < 180; c++)
	    for (int b = 5; b < 156; b++)
	      for (int a = 5; a < 156; a++)
	      {
	        
	       B[a][b]=B[a-2][b-3]-0.009;
	        
	       A[a]=A[a+4]-0.144;
	        
	       C[a][b][c]=C[a+4][b+1][c+4]*0.257;
	        
	       D[a][b][c]=0.817;
	       D[a-5][b-2][c]=0.563;
	      }

    return 0;
}