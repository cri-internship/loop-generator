#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(730, 110, 640, "zeros");
	float *D = create_one_dim_float(970, "zeros");
	float ***A = create_three_dim_float(500, 250, 470, "zeros");
	float *B = create_one_dim_float(260, "zeros");

	for (int d = 0; d < 256; d++)
	  for (int c = 0; c < 256; c++)
	    for (int b = 0; b < 256; b++)
	      for (int a = 0; a < 256; a++)
	      {
	        
	       D[a]=0.329;
	       D[a+1]=0.594;
	        
	       B[a]=0.617;
	       B[a+2]=0.105;
	        
	       C[a][b][c]=B[a]/C[a][b][c]-D[a]+A[a][b][c];
	       D[a]=B[a+4]*C[a][b][c]+D[a]/A[a][b][c];
	      }

    return 0;
}