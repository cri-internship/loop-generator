#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(340, "zeros");
	float *C = create_one_dim_float(620, "zeros");
	float ***D = create_three_dim_float(660, 150, 510, "zeros");
	float ***A = create_three_dim_float(730, 90, 850, "zeros");

	for (int b = 4; b < 90; b++)
	  for (int a = 4; a < 730; a++)
	  {
	    
	     A[a][b][a]=A[a-2][b-4][a-4]-B[a]/D[a][b][a];
	  }

    return 0;
}