#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(500, "random");
	float ***A = create_three_dim_float(520, 900, 620, "random");
	float ***B = create_three_dim_float(190, 140, 920, "random");

	for (int b = 4; b < 140; b++)
	  for (int a = 4; a < 185; a++)
	  {
	    
	     A[a][b][a]=A[a][b-4][a-1]-0.262;
	    
	     C[a]=0.594;
	     C[a+5]=0.424;
	    
	     C[a]=B[a][b][a]*C[a]-A[a][b][a];
	     A[a][b][a]=B[a+5][b][a+5]/A[a][b][a]-0.914;
	    
	     float var_a=C[a]+0.784;
	    
	     B[a][b][a]=B[a][b][a]+0.659;
	     B[a][b][a]=B[a-4][b-3][a-3]+C[a]/A[a][b][a];
	  }

    return 0;
}