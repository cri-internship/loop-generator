#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(1000, "ones");
	float *A = create_one_dim_float(560, "ones");
	float ***E = create_three_dim_float(650, 80, 510, "ones");
	float **B = create_two_dim_float(690, 430, "ones");
	float ***D = create_three_dim_float(90, 370, 110, "ones");

	for (int b = 2; b < 80; b++)
	  for (int a = 3; a < 86; a++)
	  {
	    
	     E[a][b][a]=E[a-3][b-2][a-2]/0.844;
	    
	     D[a][b][a]=0.901;
	     D[a+4][b+3][a+2]=0.881;
	  }

    return 0;
}