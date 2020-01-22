#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(620, "random");
	float ***B = create_three_dim_float(840, 730, 90, "random");
	float ***C = create_three_dim_float(520, 610, 530, "random");

	for (int b = 3; b < 610; b++)
	  for (int a = 2; a < 520; a++)
	  {
	    
	     C[a][b][a]=C[a-1][b-3][a-1]*A[a];
	    
	     B[a][b][a]=C[a][b][a];
	     B[a-1][b][a-2]=C[a][b][a]-A[a];
	  }

    return 0;
}