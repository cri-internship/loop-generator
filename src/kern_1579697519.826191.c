#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(520, "ones");
	float *B = create_one_dim_float(520, "ones");
	float ***C = create_three_dim_float(130, 160, 210, "ones");

	for (int d = 0; d < 208; d++)
	  for (int c = 0; c < 157; c++)
	    for (int b = 2; b < 129; b++)
	      for (int a = 2; a < 129; a++)
	      {
	        
	       B[a]=B[a-2]*0.439;
	        
	       C[a][b][c]=0.807;
	       C[a+1][b+3][c+2]=0.137;
	        
	       A[a]=0.671;
	       A[a+4]=0.682;
	      }

    return 0;
}