#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(120, 400, 1000, "zeros");
	float **B = create_two_dim_float(660, 220, "zeros");
	float **A = create_two_dim_float(240, 860, "zeros");

	for (int b = 5; b < 220; b++)
	  for (int a = 3; a < 117; a++)
	  {
	    
	     C[a][b][a]=C[a-3][b-4][a-2]+0.457;
	    
	     B[a][b]=B[a][b-5]+0.73;
	    
	     C[a][b][a]=C[a+3][b+4][a+3]*A[a][b]+B[a][b];
	    
	     C[a][b][a]=C[a][b+2][a+1]-0.62;
	    
	     float var_a=A[a][b]+0.603;
	     float var_b=A[a+4][b+2]-0.763;
	    
	     A[a][b]=A[a][b]-C[a][b][a];
	     C[a][b][a]=A[a][b+1]*C[a][b][a]/B[a][b];
	  }

    return 0;
}