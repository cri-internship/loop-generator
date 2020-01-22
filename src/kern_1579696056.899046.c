#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(20, 740, 780, "ones");
	float ***A = create_three_dim_float(130, 820, 340, "ones");
	float *E = create_one_dim_float(560, "ones");
	float ***C = create_three_dim_float(180, 910, 550, "ones");
	float ***D = create_three_dim_float(590, 360, 360, "ones");

	for (int b = 4; b < 818; b++)
	  for (int a = 4; a < 128; a++)
	  {
	    
	     A[a][b][a]=A[a-4][b-4][a-3]-D[a][b][a]/E[a]+0.549*C[a][b][a];
	    
	     A[a][b][a]=B[a][b][a]/D[a][b][a];
	  }

    return 0;
}