#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(890, 960, 490, "ones");
	float *C = create_one_dim_float(90, "ones");
	float ***D = create_three_dim_float(840, 970, 920, "ones");
	float ***B = create_three_dim_float(280, 620, 670, "ones");

	for (int b = 5; b < 960; b++)
	  for (int a = 4; a < 890; a++)
	  {
	    
	     A[a][b][a]=A[a][b][a]-C[a];
	     D[a][b][a]=A[a-4][b-5][a-2]*B[a][b][a]+D[a][b][a]/C[a];
	  }

    return 0;
}