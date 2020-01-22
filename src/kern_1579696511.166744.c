#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(330, 230, 980, "random");
	float **C = create_two_dim_float(390, 10, "random");
	float **A = create_two_dim_float(700, 900, "random");

	for (int b = 4; b < 10; b++)
	  for (int a = 5; a < 390; a++)
	  {
	    
	     C[a][b]=C[a-2][b]*B[a][b][a];
	    
	     C[a][b]=0.235;
	    
	     C[a][b]=A[a][b]/0.116;
	     B[a][b][a]=A[a+2][b]/0.502;
	  }

    return 0;
}