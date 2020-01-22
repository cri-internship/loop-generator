#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(780, 580, "random");
	float ***D = create_three_dim_float(870, 290, 620, "random");
	float *A = create_one_dim_float(570, "random");
	float ***C = create_three_dim_float(260, 240, 280, "random");

	for (int b = 5; b < 238; b++)
	  for (int a = 2; a < 255; a++)
	  {
	    
	     D[a][b][a]=D[a-1][b-5][a-2]-0.206;
	    
	     A[a]=A[a]+C[a][b][a];
	     A[a]=B[a][b]/0.062;
	    
	     D[a][b][a]=D[a+5][b+4][a]+A[a]/A[a]*C[a][b][a];
	    
	     C[a][b][a]=C[a][b+2][a+5]*0.708;
	    
	     float var_a=A[a]*0.169;
	     float var_b=A[a+2]-0.216;
	    
	     float var_c=B[a][b]+0.615;
	     float var_d=B[a-1][b-3]+0.482;
	    
	     float var_e=A[a]+0.552;
	     float var_f=A[a+1]-0.885;
	  }

    return 0;
}