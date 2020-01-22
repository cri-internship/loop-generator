#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *D = create_one_dim_double(910, "ones");
	double *B = create_one_dim_double(60, "ones");
	double **A = create_two_dim_double(160, 230, "ones");
	double ***C = create_three_dim_double(790, 130, 210, "ones");

	for (int d = 3; d < 205; d++)
	  for (int c = 3; c < 128; c++)
	    for (int b = 5; b < 160; b++)
	      for (int a = 5; a < 160; a++)
	      {
	        
	       A[a][b]=A[a-4][b]/0.949;
	        
	       D[a]=D[a+3]*0.582;
	        
	       D[a]=D[a+1]+A[a][b];
	        
	       C[a][b][c]=C[a+2][b+2][c+5]+B[a];
	        
	       B[a]=C[a][b][c]*D[a]/B[a]+D[a];
	       C[a][b][c]=C[a-5][b-3][c-3]/D[a]-B[a];
	        
	       D[a]=D[a]/C[a][b][c]-0.358;
	       A[a][b]=D[a-4]/C[a][b][c]-B[a]*A[a][b];
	      }

    return 0;
}