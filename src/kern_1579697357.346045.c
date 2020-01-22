#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(40, "random");
	float *B = create_one_dim_float(220, "random");
	float ***E = create_three_dim_float(650, 660, 470, "random");
	float **A = create_two_dim_float(690, 250, "random");
	float ***D = create_three_dim_float(440, 320, 230, "random");

	for (int b = 0; b < 655; b++)
	  for (int a = 3; a < 38; a++)
	  {
	    
	     C[a]=C[a-3]/A[a][b]-E[a][b][a]*B[a];
	    
	     E[a][b][a]=C[a]+D[a][b][a];
	     E[a+5][b+5][a+1]=A[a][b]+B[a];
	    
	     B[a]=0.388+C[a];
	     B[a-1]=0.926;
	    
	     C[a]=0.023;
	    
	     E[a][b][a]=C[a]*D[a][b][a]-E[a][b][a];
	     C[a]=C[a+2]-D[a][b][a]/E[a][b][a]*0.973;
	  }

    return 0;
}