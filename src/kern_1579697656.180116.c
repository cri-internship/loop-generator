#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(820, "ones");
	float *A = create_one_dim_float(360, "ones");
	float **C = create_two_dim_float(540, 560, "ones");
	float **D = create_two_dim_float(130, 990, "ones");
	float ***E = create_three_dim_float(410, 180, 250, "ones");

	for (int d = 0; d < 246; d++)
	  for (int c = 4; c < 176; c++)
	    for (int b = 4; b < 125; b++)
	      for (int a = 4; a < 125; a++)
	      {
	        
	       B[a]=E[a][b][c]*C[a][b]/D[a][b]+A[a];
	       D[a][b]=B[a]+D[a][b]*A[a]/0.387;
	        
	       E[a][b][c]=E[a+5][b+2][c+2]/0.137;
	        
	       B[a]=D[a][b];
	        
	       D[a][b]=0.165;
	        
	       float var_a=A[a]/0.66;
	       float var_b=A[a+5]+0.845;
	        
	       float var_c=D[a][b]+0.254;
	       float var_d=D[a+5][b+2]+0.358;
	        
	       E[a][b][c]=E[a][b][c]/0.437+C[a][b];
	       A[a]=E[a][b+4][c+4]/C[a][b]-D[a][b]*A[a]+B[a];
	      }

    return 0;
}