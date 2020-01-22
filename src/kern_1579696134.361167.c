#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **D = create_two_dim_float(410, 40, "random");
	float *E = create_one_dim_float(710, "random");
	float **A = create_two_dim_float(900, 970, "random");
	float ***B = create_three_dim_float(960, 740, 350, "random");
	float ***C = create_three_dim_float(930, 210, 360, "random");

	for (int d = 0; d < 345; d++)
	  for (int c = 2; c < 40; c++)
	    for (int b = 3; b < 408; b++)
	      for (int a = 3; a < 408; a++)
	      {
	        
	       D[a][b]=B[a][b][c]-C[a][b][c]*A[a][b];
	       D[a-3][b-2]=E[a]-B[a][b][c];
	        
	       C[a][b][c]=0.277;
	       C[a+5][b+4][c+5]=0.579;
	        
	       float var_a=B[a][b][c]*0.395;
	       float var_b=B[a][b][c+2]-0.039;
	        
	       float var_c=D[a][b]/0.774;
	       float var_d=D[a+2][b]-0.034;
	        
	       A[a][b]=B[a][b][c]-D[a][b]*D[a][b]/0.758;
	       E[a]=B[a][b+1][c+5]+A[a][b];
	      }

    return 0;
}