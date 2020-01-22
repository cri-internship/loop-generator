#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(940, 900, 50, "random");
	float ***B = create_three_dim_float(690, 330, 880, "random");
	float *A = create_one_dim_float(650, "random");
	float ***D = create_three_dim_float(100, 560, 820, "random");

	for (int d = 2; d < 820; d++)
	  for (int c = 1; c < 328; c++)
	    for (int b = 4; b < 100; b++)
	      for (int a = 4; a < 100; a++)
	      {
	        
	       A[a]=A[a-1]+B[a][b][c];
	        
	       B[a][b][c]=B[a][b+2][c+2]-C[a][b][c]*D[a][b][c];
	        
	       D[a][b][c]=A[a]*0.466;
	       D[a-4][b-1][c-2]=0.204-B[a][b][c]*C[a][b][c];
	        
	       B[a][b][c]=B[a][b][c]*D[a][b][c]/A[a]+C[a][b][c];
	       C[a][b][c]=B[a+4][b+1][c+4]+D[a][b][c];
	      }

    return 0;
}