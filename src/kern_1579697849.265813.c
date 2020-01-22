#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(390, 90, 640, "zeros");
	float *B = create_one_dim_float(800, "zeros");

	for (int d = 3; d < 636; d++)
	  for (int c = 1; c < 87; c++)
	    for (int b = 4; b < 386; b++)
	      for (int a = 4; a < 386; a++)
	      {
	        
	       B[a]=B[a-4]/0.608;
	        
	       A[a][b][c]=A[a+3][b+1][c+4]/0.124;
	        
	       A[a][b][c]=0.259;
	        
	       A[a][b][c]=A[a][b][c]+0.656;
	       B[a]=A[a-2][b-1][c-3]-B[a];
	        
	       float var_a=A[a][b][c]/0.691;
	       float var_b=A[a+3][b][c+4]*0.893;
	        
	       B[a]=A[a][b][c]+B[a];
	       A[a][b][c]=A[a+2][b+3][c]+B[a];
	      }

    return 0;
}