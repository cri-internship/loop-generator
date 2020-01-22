#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***E = create_three_dim_float(880, 130, 400, "random");
	float ***C = create_three_dim_float(370, 940, 610, "random");
	float ***A = create_three_dim_float(930, 710, 720, "random");
	float **D = create_two_dim_float(80, 620, "random");
	float **B = create_two_dim_float(400, 860, "random");

	for (int b = 5; b < 130; b++)
	  for (int a = 5; a < 880; a++)
	  {
	    
	     E[a][b][a]=E[a-2][b-2][a-5]*0.664;
	    
	     E[a][b][a]=E[a][b-5][a-5]+C[a][b][a]*A[a][b][a];
	  }

    return 0;
}