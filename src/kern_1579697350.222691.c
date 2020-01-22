#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(510, 560, 560, "ones");
	float ***D = create_three_dim_float(190, 610, 70, "ones");
	float *A = create_one_dim_float(550, "ones");
	float *B = create_one_dim_float(180, "ones");

	for (int b = 3; b < 555; b++)
	  for (int a = 5; a < 180; a++)
	  {
	    
	     C[a][b][a]=C[a-5][b-3][a-2]/0.656;
	    
	     A[a]=A[a+5]+C[a][b][a]/D[a][b][a];
	    
	     D[a][b][a]=D[a+1][b+3][a+4]-0.674;
	    
	     C[a][b][a]=0.508;
	    
	     float var_a=B[a]*0.28;
	     float var_b=B[a-5]-0.49;
	    
	     B[a]=A[a]/B[a]+B[a]*D[a][b][a];
	    
	     float var_c=D[a][b][a]/0.898;
	     float var_d=D[a+5][b+3][a+3]+0.034;
	  }

    return 0;
}