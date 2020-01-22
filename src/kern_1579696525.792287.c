#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(560, 420, 420, "ones");
	float ***D = create_three_dim_float(610, 740, 830, "ones");
	float ***B = create_three_dim_float(520, 460, 830, "ones");
	float *A = create_one_dim_float(1000, "ones");

	for (int d = 0; d < 416; d++)
	  for (int c = 0; c < 416; c++)
	    for (int b = 2; b < 555; b++)
	      for (int a = 2; a < 555; a++)
	      {
	        
	       A[a]=A[a-2]/0.923;
	        
	       C[a][b][c]=C[a+5][b+4][c+4]/0.24;
	        
	       A[a]=A[a+3]-D[a][b][c]*B[a][b][c]/C[a][b][c];
	        
	       C[a][b][c]=C[a+5][b][c]+0.852;
	      }

    return 0;
}