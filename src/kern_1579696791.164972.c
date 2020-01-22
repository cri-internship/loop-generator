#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(100, 250, 170, "random");
	float ***A = create_three_dim_float(690, 50, 970, "random");
	float ***B = create_three_dim_float(380, 850, 70, "random");

	for (int b = 3; b < 248; b++)
	  for (int a = 5; a < 96; a++)
	  {
	    
	     B[a][b][a]=B[a-3][b-2][a-5]*A[a][b][a]-C[a][b][a];
	    
	     B[a][b][a]=B[a-5][b-2][a-5]+0.18;
	    
	     B[a][b][a]=B[a+5][b+1][a+2]*A[a][b][a];
	    
	     C[a][b][a]=B[a][b][a];
	     C[a][b+2][a+4]=B[a][b][a];
	    
	     A[a][b][a]=C[a][b][a]*A[a][b][a];
	     C[a][b][a]=C[a][b-3][a-1]+B[a][b][a];
	    
	     float var_a=B[a][b][a]-0.037;
	     float var_b=B[a-5][b][a]/0.425;
	  }

    return 0;
}