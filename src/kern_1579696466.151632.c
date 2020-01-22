#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(280, "ones");
	float ***A = create_three_dim_float(840, 550, 960, "ones");
	float ***C = create_three_dim_float(170, 240, 170, "ones");
	float ***E = create_three_dim_float(350, 580, 570, "ones");
	float *D = create_one_dim_float(480, "ones");

	for (int d = 4; d < 570; d++)
	  for (int c = 1; c < 580; c++)
	    for (int b = 0; b < 280; b++)
	      for (int a = 0; a < 280; a++)
	      {
	        
	       E[a][b][c]=E[a][b-1][c-4]-0.182;
	        
	       B[a]=B[a]/C[a][b][c]+D[a];
	       D[a]=B[a]-E[a][b][c]+A[a][b][c]*A[a][b][c];
	      }

    return 0;
}