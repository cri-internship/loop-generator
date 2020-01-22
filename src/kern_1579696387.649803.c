#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(190, 620, 670, "random");
	float ***C = create_three_dim_float(190, 370, 250, "random");
	float **B = create_two_dim_float(320, 200, "random");
	float **D = create_two_dim_float(860, 210, "random");

	for (int b = 3; b < 370; b++)
	  for (int a = 2; a < 190; a++)
	  {
	    
	     A[a][b][a]=C[a][b][a]-A[a][b][a]/B[a][b];
	     C[a][b][a]=C[a][b-3][a-2]+D[a][b];
	  }

    return 0;
}