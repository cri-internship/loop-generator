#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(520, "random");
	float *D = create_one_dim_float(390, "random");
	float *E = create_one_dim_float(40, "random");
	float ***B = create_three_dim_float(950, 330, 220, "random");
	float *A = create_one_dim_float(380, "random");

	for (int c = 0; c < 215; c++)
	  for (int b = 0; b < 327; b++)
	    for (int a = 4; a < 40; a++)
	    {
	      
	      C[a]=C[a+4]*0.584;
	      
	      D[a]=D[a]+A[a]-E[a]*C[a];
	      A[a]=D[a-4]/0.843-E[a]*B[a][b][c]+C[a];
	      
	      float var_a=E[a]+0.477;
	      float var_b=E[a-3]-0.107;
	      
	      float var_c=C[a]*0.75;
	      float var_d=C[a+5]*0.902;
	      
	      B[a][b][c]=B[a][b][c]+D[a]/C[a];
	      E[a]=B[a+2][b+3][c+5]*0.703;
	    }

    return 0;
}