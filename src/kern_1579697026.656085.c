#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(130, 540, 550, "ones");
	float **C = create_two_dim_float(690, 130, "ones");
	float *E = create_one_dim_float(930, "ones");
	float **D = create_two_dim_float(200, 400, "ones");
	float ***B = create_three_dim_float(840, 730, 310, "ones");

	for (int b = 4; b < 125; b++)
	  for (int a = 5; a < 128; a++)
	  {
	    
	     C[a][b]=C[a-1][b-2]-0.956;
	    
	     B[a][b][a]=B[a][b+3][a+3]+E[a]/A[a][b][a];
	    
	     A[a][b][a]=A[a][b+2][a+2]+B[a][b][a]*D[a][b]/C[a][b]-B[a][b][a];
	    
	     C[a][b]=C[a+1][b+5]*0.642;
	    
	     D[a][b]=D[a+2][b+4]+B[a][b][a]/A[a][b][a]*E[a]-C[a][b];
	    
	     float var_a=B[a][b][a]/0.974;
	     float var_b=B[a-4][b-1][a-5]*0.793;
	    
	     float var_c=A[a][b][a]/0.557;
	     float var_d=A[a-5][b-4][a-2]/0.855;
	  }

    return 0;
}