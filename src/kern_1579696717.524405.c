#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(770, 720, 980, "random");
	float **E = create_two_dim_float(430, 720, "random");
	float *B = create_one_dim_float(60, "random");
	float ***C = create_three_dim_float(330, 700, 240, "random");
	float ***D = create_three_dim_float(770, 710, 750, "random");

	for (int d = 0; d < 750; d++)
	  for (int c = 0; c < 706; c++)
	    for (int b = 0; b < 60; b++)
	      for (int a = 0; a < 60; a++)
	      {
	        
	       E[a][b]=E[a+4][b+1]/B[a]-A[a][b][c]+D[a][b][c]*C[a][b][c];
	        
	       D[a][b][c]=D[a+4][b+1][c]/0.066;
	        
	       E[a][b]=D[a][b][c]+C[a][b][c];
	        
	       B[a]=0.658;
	       B[a]=0.488;
	        
	       B[a]=D[a][b][c]*E[a][b]+B[a]-0.029/C[a][b][c];
	       A[a][b][c]=D[a+5][b+4][c]+C[a][b][c]-B[a]/E[a][b];
	      }

    return 0;
}