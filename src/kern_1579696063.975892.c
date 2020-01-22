#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(90, 900, 710, "ones");
	float ***B = create_three_dim_float(990, 550, 270, "ones");
	float **C = create_two_dim_float(820, 170, "ones");

	for (int b = 5; b < 170; b++)
	  for (int a = 5; a < 90; a++)
	  {
	    
	     C[a][b]=B[a][b][a]+A[a][b][a];
	     C[a-3][b-1]=A[a][b][a]+B[a][b][a];
	    
	     C[a][b]=B[a][b][a]/0.237;
	    
	     float var_a=B[a][b][a]*0.074;
	     float var_b=B[a-2][b-1][a-4]/0.074;
	    
	     float var_c=A[a][b][a]*0.571;
	     float var_d=A[a-2][b-5][a-5]/0.853;
	  }

    return 0;
}