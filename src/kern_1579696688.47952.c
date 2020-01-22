#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(360, 480, 950, "random");
	float ***C = create_three_dim_float(160, 240, 190, "random");
	float ***B = create_three_dim_float(400, 390, 850, "random");

	for (int b = 5; b < 239; b++)
	  for (int a = 4; a < 157; a++)
	  {
	    
	     B[a][b][a]=B[a-1][b-5][a]-0.129;
	    
	     A[a][b][a]=A[a-1][b-5][a]*0.468;
	    
	     B[a][b][a]=B[a-2][b][a-2]/A[a][b][a]+C[a][b][a];
	    
	     C[a][b][a]=0.425;
	     C[a-1][b-4][a]=0.65;
	    
	     C[a][b][a]=C[a][b][a]+B[a][b][a]-0.214;
	     A[a][b][a]=C[a-2][b-1][a]-0.142/B[a][b][a];
	    
	     float var_a=C[a][b][a]/0.728;
	     float var_b=C[a-4][b-5][a]-0.781;
	    
	     B[a][b][a]=C[a][b][a]+B[a][b][a]*A[a][b][a];
	     B[a][b][a]=C[a+3][b+1][a+3]+B[a][b][a];
	  }

    return 0;
}