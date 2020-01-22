#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***D = create_three_dim_float(360, 270, 960, "random");
	float ***A = create_three_dim_float(950, 980, 760, "random");
	float **C = create_two_dim_float(930, 110, "random");
	float ***B = create_three_dim_float(980, 1000, 870, "random");

	for (int b = 5; b < 975; b++)
	  for (int a = 5; a < 945; a++)
	  {
	    
	     A[a][b][a]=A[a-4][b-5][a]+0.064;
	    
	     A[a][b][a]=A[a+1][b+4][a+5]*0.391;
	    
	     A[a][b][a]=A[a+4][b+5][a]/B[a][b][a]-0.771;
	    
	     B[a][b][a]=A[a][b][a]*D[a][b][a];
	     C[a][b]=A[a-5][b-5][a-1]-B[a][b][a]/D[a][b][a];
	  }

    return 0;
}