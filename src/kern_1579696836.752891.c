#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(980, 1000, "ones");
	float **D = create_two_dim_float(530, 200, "ones");
	float **C = create_two_dim_float(340, 360, "ones");
	float ***B = create_three_dim_float(40, 240, 350, "ones");

	for (int b = 4; b < 240; b++)
	  for (int a = 5; a < 40; a++)
	  {
	    
	     B[a][b][a]=B[a-3][b-4][a-5]-0.813;
	    
	     C[a][b]=C[a-3][b]+D[a][b]-A[a][b];
	    
	     B[a][b][a]=0.736;
	  }

    return 0;
}