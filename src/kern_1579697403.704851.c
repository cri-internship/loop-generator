#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(240, 680, 180, "zeros");
	float ***D = create_three_dim_float(980, 640, 280, "zeros");
	float *C = create_one_dim_float(780, "zeros");
	float ***B = create_three_dim_float(720, 130, 720, "zeros");

	for (int b = 0; b < 678; b++)
	  for (int a = 0; a < 240; a++)
	  {
	    
	     float var_a=C[a]*0.148;
	     float var_b=C[a]+0.089;
	    
	     B[a][b][a]=A[a][b][a]*C[a];
	     A[a][b][a]=A[a][b+2][a]+B[a][b][a]*D[a][b][a]/B[a][b][a];
	  }

    return 0;
}