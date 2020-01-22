#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(30, "zeros");
	float ***A = create_three_dim_float(620, 260, 820, "zeros");
	float ***C = create_three_dim_float(590, 250, 50, "zeros");

	for (int d = 4; d < 45; d++)
	  for (int c = 1; c < 245; c++)
	    for (int b = 1; b < 585; b++)
	      for (int a = 1; a < 585; a++)
	      {
	        
	       C[a][b][c]=C[a+5][b+1][c+4]-0.38;
	        
	       A[a][b][c]=A[a+1][b+2][c]-B[a];
	        
	       A[a][b][c]=A[a+4][b+3][c+2]-C[a][b][c];
	        
	       C[a][b][c]=C[a+1][b+3][c+2]*0.23;
	      }

    return 0;
}