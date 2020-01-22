#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **D = create_two_dim_float(750, 600, "zeros");
	float *B = create_one_dim_float(790, "zeros");
	float **C = create_two_dim_float(450, 90, "zeros");
	float ***E = create_three_dim_float(840, 110, 380, "zeros");
	float *A = create_one_dim_float(450, "zeros");

	for (int d = 0; d < 376; d++)
	  for (int c = 0; c < 107; c++)
	    for (int b = 0; b < 749; b++)
	      for (int a = 0; a < 749; a++)
	      {
	        
	       D[a][b]=D[a][b+5]*0.256;
	        
	       E[a][b][c]=E[a][b+3][c+4]*0.413;
	        
	       D[a][b]=0.976;
	        
	       E[a][b][c]=B[a]/D[a][b];
	       B[a]=B[a]/E[a][b][c]+C[a][b]-A[a]*E[a][b][c];
	      }

    return 0;
}