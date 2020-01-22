#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(750, 900, "random");
	float **D = create_two_dim_float(240, 280, "random");
	float *C = create_one_dim_float(180, "random");
	float ***E = create_three_dim_float(660, 310, 260, "random");
	float **A = create_two_dim_float(420, 700, "random");

	for (int b = 3; b < 309; b++)
	  for (int a = 3; a < 180; a++)
	  {
	    
	     C[a]=C[a-1]-0.55;
	    
	     E[a][b][a]=0.326;
	     E[a+5][b+1][a+3]=0.073;
	    
	     E[a][b][a]=B[a][b]/D[a][b]+A[a][b]*C[a];
	    
	     D[a][b]=B[a][b]+E[a][b][a]*E[a][b][a]-C[a];
	     A[a][b]=B[a+5][b+5]+D[a][b];
	    
	     float var_a=A[a][b]/0.447;
	     float var_b=A[a][b+4]*0.176;
	    
	     E[a][b][a]=B[a][b]-0.118;
	     B[a][b]=B[a+4][b]/D[a][b]*E[a][b][a]-C[a]+0.678;
	    
	     float var_c=C[a]/0.19;
	     float var_d=C[a-3]/0.84;
	  }

    return 0;
}