#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(330, "ones");
	float ***D = create_three_dim_float(830, 760, 710, "ones");
	float **B = create_two_dim_float(240, 840, "ones");
	float *A = create_one_dim_float(400, "ones");

	for (int d = 0; d < 709; d++)
	  for (int c = 5; c < 755; c++)
	    for (int b = 4; b < 240; b++)
	      for (int a = 4; a < 240; a++)
	      {
	        
	       B[a][b]=B[a-4][b-5]/D[a][b][c]+A[a];
	        
	       A[a]=A[a-4]*B[a][b]/C[a];
	        
	       A[a]=A[a+3]-D[a][b][c];
	        
	       D[a][b][c]=D[a+4][b+5][c+1]-B[a][b]+C[a]*A[a];
	      }

    return 0;
}