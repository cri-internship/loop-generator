#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***D = create_three_dim_float(100, 130, 470, "random");
	float ***A = create_three_dim_float(380, 470, 900, "random");
	float **C = create_two_dim_float(480, 220, "random");
	float **B = create_two_dim_float(920, 220, "random");

	for (int b = 3; b < 215; b++)
	  for (int a = 5; a < 480; a++)
	  {
	    
	     B[a][b]=B[a-5][b-3]+0.942;
	    
	     C[a][b]=C[a][b+5]+0.744/A[a][b][a];
	    
	     float var_a=C[a][b]*0.543;
	     float var_b=C[a][b+4]*0.466;
	    
	     A[a][b][a]=B[a][b]-C[a][b]*C[a][b];
	     D[a][b][a]=B[a+3][b+5]*D[a][b][a]-C[a][b];
	  }

    return 0;
}