#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(340, "ones");
	float ***A = create_three_dim_float(620, 330, 10, "ones");
	float *D = create_one_dim_float(320, "ones");
	float **B = create_two_dim_float(130, 160, "ones");

	for (int c = 2; c < 10; c++)
	  for (int b = 4; b < 155; b++)
	    for (int a = 5; a < 129; a++)
	    {
	      
	      A[a][b][c]=A[a-2][b-4][c-1]/0.081;
	      
	      B[a][b]=B[a-5][b-2]/D[a]*0.205+A[a][b][c];
	      
	      D[a]=D[a-4]/0.867;
	      
	      B[a][b]=B[a+1][b+5]-0.991;
	      
	      D[a]=D[a+1]+0.319;
	      
	      float var_a=A[a][b][c]-0.873;
	      float var_b=A[a-3][b-2][c-2]/0.143;
	      
	      float var_c=D[a]+0.65;
	      float var_d=D[a-1]/0.024;
	    }

    return 0;
}