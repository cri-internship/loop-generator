#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***C = create_three_dim_double(690, 980, 200, "ones");
	double *B = create_one_dim_double(100, "ones");
	double ***D = create_three_dim_double(920, 290, 960, "ones");
	double *A = create_one_dim_double(810, "ones");

	for (int d = 0; d < 196; d++)
	  for (int c = 0; c < 287; c++)
	    for (int b = 2; b < 100; b++)
	      for (int a = 2; a < 100; a++)
	      {
	        
	       A[a]=A[a-1]/D[a][b][c]+C[a][b][c]-B[a];
	        
	       B[a]=B[a-2]*A[a]/C[a][b][c];
	        
	       A[a]=C[a][b][c];
	        
	       D[a][b][c]=D[a][b+3][c+1]*C[a][b][c]+A[a]/B[a];
	        
	       B[a]=C[a][b][c]/A[a];
	        
	       C[a][b][c]=0.554;
	       C[a+3][b+3][c+4]=0.39;
	      }

    return 0;
}