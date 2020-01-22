#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(360, 100, "random");
	float **C = create_two_dim_float(570, 940, "random");
	float *D = create_one_dim_float(670, "random");
	float ***E = create_three_dim_float(50, 930, 780, "random");
	float *A = create_one_dim_float(760, "random");

	for (int d = 0; d < 775; d++)
	  for (int c = 5; c < 95; c++)
	    for (int b = 2; b < 45; b++)
	      for (int a = 2; a < 45; a++)
	      {
	        
	       E[a][b][c]=E[a+4][b+5][c]/0.826;
	        
	       E[a][b][c]=E[a+5][b+4][c+5]+B[a][b];
	        
	       float var_a=D[a]-0.586;
	       float var_b=D[a-2]*0.673;
	        
	       float var_c=D[a]+0.965;
	        
	       D[a]=D[a]*A[a]-E[a][b][c]/C[a][b]+A[a];
	       E[a][b][c]=D[a+2]/B[a][b]+E[a][b][c]-C[a][b]*A[a];
	        
	       C[a][b]=B[a][b]/D[a]*C[a][b]+A[a]-0.316;
	       A[a]=B[a+1][b+5]+0.468-E[a][b][c]/C[a][b]*A[a];
	        
	       float var_e=C[a][b]/0.156;
	       float var_f=C[a][b-5]/0.863;
	      }

    return 0;
}