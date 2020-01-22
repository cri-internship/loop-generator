#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(950, "random");
	float ***C = create_three_dim_float(20, 130, 980, "random");
	float ***B = create_three_dim_float(930, 70, 890, "random");

	for (int b = 4; b < 70; b++)
	  for (int a = 4; a < 20; a++)
	  {
	    
	     B[a][b][a]=B[a-2][b-3][a-4]*C[a][b][a];
	    
	     A[a]=0.547;
	     A[a-2]=0.369;
	    
	     C[a][b][a]=A[a]/B[a][b][a];
	     C[a-1][b-4][a-4]=B[a][b][a];
	    
	     C[a][b][a]=C[a][b][a]/0.771;
	     A[a]=C[a-2][b-3][a]*A[a]+B[a][b][a];
	  }

    return 0;
}