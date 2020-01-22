#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(660, "ones");
	float *D = create_one_dim_float(650, "ones");
	float ***B = create_three_dim_float(890, 240, 570, "ones");
	float *C = create_one_dim_float(430, "ones");

	for (int d = 4; d < 570; d++)
	  for (int c = 1; c < 240; c++)
	    for (int b = 4; b < 430; b++)
	      for (int a = 4; a < 430; a++)
	      {
	        
	       B[a][b][c]=B[a-4][b-1][c-4]/0.518;
	        
	       C[a]=C[a-2]-A[a]+B[a][b][c];
	        
	       D[a]=C[a];
	       D[a]=D[a]/B[a][b][c]*A[a];
	        
	       D[a]=D[a+2]*B[a][b][c]+C[a];
	        
	       D[a]=D[a+1]+0.366;
	        
	       A[a]=D[a]*D[a];
	       A[a-1]=B[a][b][c]-D[a];
	      }

    return 0;
}