#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(570, 940, 850, "ones");
	float **C = create_two_dim_float(490, 440, "ones");
	float ***B = create_three_dim_float(960, 240, 1000, "ones");

	for (int b = 0; b < 235; b++)
	  for (int a = 0; a < 487; a++)
	  {
	    
	     B[a][b][a]=B[a+1][b+5][a+2]+0.958;
	    
	     C[a][b]=C[a+3][b+2]+B[a][b][a]*A[a][b][a];
	  }

    return 0;
}