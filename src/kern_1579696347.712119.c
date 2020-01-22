#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(500, 770, 440, "random");
	float ***C = create_three_dim_float(890, 280, 200, "random");
	float *B = create_one_dim_float(980, "random");
	float ***D = create_three_dim_float(560, 290, 720, "random");

	for (int b = 5; b < 280; b++)
	  for (int a = 5; a < 500; a++)
	  {
	    
	     A[a][b][a]=A[a-3][b-3][a-4]-0.002;
	    
	     A[a][b][a]=A[a-5][b-5][a-1]+D[a][b][a]/C[a][b][a];
	    
	     D[a][b][a]=D[a-3][b][a-1]/A[a][b][a]+B[a]*A[a][b][a];
	    
	     A[a][b][a]=B[a]*0.53;
	     B[a]=A[a][b][a]/D[a][b][a]-C[a][b][a];
	    
	     C[a][b][a]=0.679;
	     C[a-2][b-5][a-1]=0.091;
	  }

    return 0;
}