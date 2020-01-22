#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(460, 920, 580, "ones");
	float *C = create_one_dim_float(520, "ones");
	float ***A = create_three_dim_float(770, 360, 120, "ones");

	for (int d = 5; d < 580; d++)
	  for (int c = 2; c < 916; c++)
	    for (int b = 1; b < 460; b++)
	      for (int a = 1; a < 460; a++)
	      {
	        
	       A[a][b][c]=B[a][b][c]+C[a];
	       B[a][b][c]=B[a-1][b-2][c-5]/A[a][b][c];
	        
	       C[a]=B[a][b][c]/A[a][b][c]-C[a];
	       C[a]=B[a][b+4][c]-A[a][b][c];
	      }

    return 0;
}