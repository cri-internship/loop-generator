#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(480, 470, "random");
	float *D = create_one_dim_float(610, "random");
	float ***A = create_three_dim_float(210, 300, 240, "random");
	float *C = create_one_dim_float(420, "random");

	for (int b = 5; b < 300; b++)
	  for (int a = 4; a < 210; a++)
	  {
	    
	     C[a]=C[a-4]/D[a];
	    
	     C[a]=D[a]/C[a]-A[a][b][a]+B[a][b];
	     A[a][b][a]=D[a]/B[a][b]*A[a][b][a]+C[a];
	    
	     B[a][b]=A[a][b][a]*C[a]-D[a]/B[a][b];
	     D[a]=A[a-1][b-5][a-4]+B[a][b];
	  }

    return 0;
}