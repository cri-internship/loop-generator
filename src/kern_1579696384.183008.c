#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(550, 600, 600, "random");
	float **D = create_two_dim_float(330, 930, "random");
	float ***B = create_three_dim_float(460, 270, 390, "random");
	float **A = create_two_dim_float(220, 380, "random");

	for (int b = 4; b < 266; b++)
	  for (int a = 2; a < 218; a++)
	  {
	    
	     D[a][b]=D[a-2][b-4]/0.689;
	    
	     A[a][b]=A[a+2][b+5]*C[a][b][a]/D[a][b]+0.296;
	    
	     B[a][b][a]=B[a+4][b+3][a+3]-A[a][b];
	    
	     C[a][b][a]=0.506;
	     C[a+3][b+3][a+4]=0.058;
	    
	     B[a][b][a]=B[a][b][a]/A[a][b]+C[a][b][a];
	     A[a][b]=B[a+4][b+4][a+3]*C[a][b][a]/D[a][b]+A[a][b];
	    
	     float var_a=C[a][b][a]+0.803;
	     float var_b=C[a][b+3][a+3]+0.252;
	  }

    return 0;
}