#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(780, 60, "random");
	float ***C = create_three_dim_float(470, 620, 110, "random");
	float **A = create_two_dim_float(70, 890, "random");

	for (int b = 5; b < 60; b++)
	  for (int a = 4; a < 66; a++)
	  {
	    
	     B[a][b]=B[a-4][b-2]*C[a][b][a]/A[a][b];
	    
	     A[a][b]=A[a][b-5]-0.054;
	    
	     A[a][b]=A[a+4][b+1]*0.296;
	    
	     float var_a=C[a][b][a]*0.109;
	     float var_b=C[a+3][b+5][a+5]+0.456;
	    
	     C[a][b][a]=C[a][b][a]*B[a][b];
	     B[a][b]=C[a+5][b+2][a]/B[a][b]-A[a][b];
	  }

    return 0;
}