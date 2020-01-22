#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *E = create_one_dim_float(130, "random");
	float ***D = create_three_dim_float(530, 760, 410, "random");
	float **A = create_two_dim_float(890, 640, "random");
	float *B = create_one_dim_float(540, "random");
	float **C = create_two_dim_float(580, 930, "random");

	for (int d = 0; d < 409; d++)
	  for (int c = 3; c < 638; c++)
	    for (int b = 5; b < 526; b++)
	      for (int a = 5; a < 526; a++)
	      {
	        
	       A[a][b]=A[a+3][b+2]+E[a]*D[a][b][c]-C[a][b];
	        
	       B[a]=B[a+2]/A[a][b];
	        
	       float var_a=D[a][b][c]+0.277;
	       float var_b=D[a+4][b+2][c+1]-0.819;
	        
	       float var_c=A[a][b]*0.048;
	       float var_d=A[a-5][b-3]+0.479;
	        
	       B[a]=D[a][b][c]/B[a]*A[a][b];
	       D[a][b][c]=D[a+2][b+2][c+1]-C[a][b]+A[a][b]*B[a];
	        
	       float var_e=B[a]/0.767;
	       float var_f=B[a-1]*0.318;
	      }

    return 0;
}