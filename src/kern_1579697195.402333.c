#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *D = create_one_dim_float(380, "random");
	float *A = create_one_dim_float(960, "random");
	float ***B = create_three_dim_float(390, 660, 320, "random");
	float ***C = create_three_dim_float(600, 760, 850, "random");

	for (int b = 5; b < 657; b++)
	  for (int a = 3; a < 377; a++)
	  {
	    
	     B[a][b][a]=B[a+2][b+3][a+3]-0.798;
	    
	     D[a]=B[a][b][a]+C[a][b][a];
	     D[a+2]=A[a]+B[a][b][a]-A[a];
	    
	     float var_a=B[a][b][a]+0.384;
	     float var_b=B[a][b+3][a]/0.268;
	    
	     B[a][b][a]=D[a]*C[a][b][a]-A[a]/B[a][b][a];
	     A[a]=D[a+3]+C[a][b][a];
	    
	     float var_c=C[a][b][a]*0.999;
	     float var_d=C[a+2][b+2][a+3]-0.586;
	    
	     float var_e=C[a][b][a]*0.783;
	     float var_f=C[a-3][b-5][a-1]+0.624;
	  }

    return 0;
}