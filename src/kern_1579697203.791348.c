#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***E = create_three_dim_float(570, 40, 260, "ones");
	float **A = create_two_dim_float(1000, 430, "ones");
	float ***B = create_three_dim_float(630, 80, 900, "ones");
	float ***D = create_three_dim_float(360, 370, 310, "ones");
	float *C = create_one_dim_float(570, "ones");

	for (int b = 5; b < 80; b++)
	  for (int a = 5; a < 355; a++)
	  {
	    
	     D[a][b][a]=D[a-2][b-5][a-2]-C[a];
	    
	     D[a][b][a]=D[a+3][b+1][a+5]+E[a][b][a]/A[a][b]-0.274*E[a][b][a];
	    
	     float var_a=D[a][b][a]+0.033;
	     float var_b=D[a+1][b+4][a]*0.389;
	    
	     float var_c=C[a]*0.036;
	     float var_d=C[a]-0.985;
	    
	     D[a][b][a]=B[a][b][a]*D[a][b][a]+A[a][b]/E[a][b][a];
	     E[a][b][a]=B[a-5][b-4][a-5]/0.692-D[a][b][a];
	  }

    return 0;
}