#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(350, 340, 530, "ones");
	float *D = create_one_dim_float(410, "ones");
	float *C = create_one_dim_float(600, "ones");
	float ***A = create_three_dim_float(340, 540, 590, "ones");

	for (int d = 0; d < 526; d++)
	  for (int c = 4; c < 339; c++)
	    for (int b = 1; b < 339; b++)
	      for (int a = 1; a < 339; a++)
	      {
	        
	       D[a]=D[a-1]-B[a][b][c]+C[a]/A[a][b][c];
	        
	       B[a][b][c]=D[a];
	       B[a+4][b+1][c+4]=D[a]-A[a][b][c]+C[a];
	        
	       A[a][b][c]=B[a][b][c];
	       A[a-1][b-4][c]=D[a];
	        
	       D[a]=A[a][b][c]*C[a]+B[a][b][c];
	       B[a][b][c]=A[a+1][b+2][c+1]-B[a][b][c]+C[a];
	      }

    return 0;
}