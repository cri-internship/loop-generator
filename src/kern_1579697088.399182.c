#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***C = create_three_dim_double(10, 700, 650, "random");
	double **B = create_two_dim_double(870, 990, "random");
	double **D = create_two_dim_double(670, 130, "random");
	double ***A = create_three_dim_double(370, 650, 350, "random");

	for (int d = 0; d < 350; d++)
	  for (int c = 4; c < 126; c++)
	    for (int b = 4; b < 6; b++)
	      for (int a = 4; a < 6; a++)
	      {
	        
	       B[a][b]=B[a-2][b-4]-0.443;
	        
	       D[a][b]=D[a-3][b-1]*0.737;
	        
	       A[a][b][c]=A[a-3][b][c]-B[a][b]/C[a][b][c]+B[a][b];
	        
	       D[a][b]=D[a][b+4]+A[a][b][c]/0.171;
	        
	       A[a][b][c]=D[a][b];
	        
	       C[a][b][c]=A[a][b][c]*D[a][b]/0.023;
	       C[a+4][b+5][c]=B[a][b]-D[a][b]*A[a][b][c];
	        
	       B[a][b]=0.383;
	      }

    return 0;
}