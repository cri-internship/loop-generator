#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(390, 620, "random");
	float ***C = create_three_dim_float(190, 710, 70, "random");
	float ***E = create_three_dim_float(510, 300, 160, "random");
	float **B = create_two_dim_float(310, 880, "random");
	float **D = create_two_dim_float(710, 620, "random");

	for (int b = 5; b < 298; b++)
	  for (int a = 0; a < 187; a++)
	  {
	    
	     B[a][b]=B[a][b-5]-A[a][b]+D[a][b];
	    
	     A[a][b]=A[a+1][b+4]-0.846;
	    
	     E[a][b][a]=E[a+5][b+2][a+2]/C[a][b][a]+B[a][b]-0.002;
	    
	     A[a][b]=0.122;
	    
	     float var_a=C[a][b][a]*0.206;
	     float var_b=C[a+2][b+5][a+3]/0.544;
	  }

    return 0;
}