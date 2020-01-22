#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(150, 540, 890, "random");
	float ***B = create_three_dim_float(940, 110, 200, "random");
	float ***D = create_three_dim_float(730, 100, 480, "random");
	float ***A = create_three_dim_float(900, 850, 120, "random");

	for (int b = 4; b < 538; b++)
	  for (int a = 5; a < 149; a++)
	  {
	    
	     C[a][b][a]=C[a][b+2][a+1]*D[a][b][a];
	    
	     C[a][b][a]=B[a][b][a]*A[a][b][a];
	  }

    return 0;
}