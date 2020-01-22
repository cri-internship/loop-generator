#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(470, 80, 980, "zeros");
	float *A = create_one_dim_float(120, "zeros");
	float ***B = create_three_dim_float(690, 100, 300, "zeros");

	for (int d = 5; d < 298; d++)
	  for (int c = 3; c < 77; c++)
	    for (int b = 3; b < 120; b++)
	      for (int a = 3; a < 120; a++)
	      {
	        
	       A[a]=A[a-3]-0.002;
	        
	       C[a][b][c]=C[a+1][b+3][c+5]*B[a][b][c]-A[a];
	        
	       B[a][b][c]=0.336;
	       B[a-3][b-3][c-5]=0.819;
	        
	       B[a][b][c]=0.884;
	      }

    return 0;
}