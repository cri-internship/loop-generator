#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(880, 360, 490, "random");
	float *C = create_one_dim_float(770, "random");
	float ***B = create_three_dim_float(530, 140, 420, "random");

	for (int c = 5; c < 420; c++)
	  for (int b = 2; b < 140; b++)
	    for (int a = 4; a < 530; a++)
	    {
	      
	      B[a][b][c]=C[a];
	      B[a-3][b-2][c-5]=A[a][b][c]/A[a][b][c];
	      
	      A[a][b][c]=B[a][b][c];
	      A[a+1][b+1][c]=0.693;
	      
	      float var_a=C[a]/0.404;
	      float var_b=C[a-4]/0.319;
	      
	      float var_c=A[a][b][c]/0.985;
	      float var_d=A[a+3][b+5][c+3]*0.992;
	    }

    return 0;
}