#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(10, "random");
	int *D = create_one_dim_int(560, "random");
	int *B = create_one_dim_int(960, "random");
	int ***C = create_three_dim_int(80, 720, 900, "random");

	for (int b = 5; b < 720; b++)
	  for (int a = 5; a < 10; a++)
	  {
	    
	     C[a][b][a]=C[a-5][b-5][a]/45;
	    
	     C[a][b][a]=B[a]-A[a];
	     B[a]=B[a+1]/D[a]+C[a][b][a];
	    
	     D[a]=D[a]+B[a]*4/B[a];
	     A[a]=D[a-1]+A[a];
	    
	     D[a]=A[a]*D[a]/C[a][b][a]-B[a];
	     C[a][b][a]=A[a-2]-D[a];
	  }

    return 0;
}