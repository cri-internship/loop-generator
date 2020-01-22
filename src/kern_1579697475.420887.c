#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(970, "zeros");
	int ***B = create_three_dim_int(60, 480, 270, "zeros");
	int *C = create_one_dim_int(910, "zeros");

	for (int d = 0; d < 270; d++)
	  for (int c = 1; c < 480; c++)
	    for (int b = 5; b < 60; b++)
	      for (int a = 5; a < 60; a++)
	      {
	        
	       B[a][b][c]=B[a][b-1][c]*39;
	        
	       C[a]=C[a-3]*A[a]-B[a][b][c];
	        
	       C[a]=A[a]+B[a][b][c];
	        
	       A[a]=B[a][b][c];
	       A[a-4]=40/C[a];
	        
	       int var_a=C[a]-27;
	       int var_b=C[a-1]+16;
	        
	       int var_c=C[a]+46;
	       int var_d=C[a-5]*46;
	      }

    return 0;
}