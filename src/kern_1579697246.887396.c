#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(90, 990, 330, "zeros");
	float **C = create_two_dim_float(170, 60, "zeros");
	float *E = create_one_dim_float(640, "zeros");
	float ***A = create_three_dim_float(540, 30, 10, "zeros");
	float **D = create_two_dim_float(230, 160, "zeros");

	for (int d = 0; d < 59; d++)
	  for (int c = 0; c < 168; c++)
	    for (int b = 0; b < 168; b++)
	      for (int a = 0; a < 168; a++)
	      {
	        
	       C[a][b]=C[a+2][b+1]/E[a]-B[a][b][c];
	        
	       E[a]=D[a][b]-C[a][b];
	       E[a+3]=A[a][b][c];
	      }

    return 0;
}