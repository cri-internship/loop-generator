#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *D = create_one_dim_float(80, "random");
	float *A = create_one_dim_float(560, "random");
	float *C = create_one_dim_float(330, "random");
	float ***E = create_three_dim_float(980, 160, 870, "random");
	float *B = create_one_dim_float(290, "random");

	for (int c = 0; c < 866; c++)
	  for (int b = 0; b < 159; b++)
	    for (int a = 4; a < 76; a++)
	    {
	      
	      D[a]=D[a-2]/0.407;
	      
	      B[a]=B[a-4]*0.082;
	      
	      E[a][b][c]=E[a+1][b+1][c+4]/0.623;
	      
	      D[a]=C[a]*A[a]+E[a][b][c];
	      
	      E[a][b][c]=A[a]-D[a]*B[a];
	      B[a]=A[a+4]*0.679+C[a]-D[a];
	      
	      float var_a=A[a]+0.968;
	      float var_b=A[a+5]+0.874;
	    }

    return 0;
}