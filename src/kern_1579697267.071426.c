#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(740, 170, "random");
	float **B = create_two_dim_float(520, 490, "random");
	float ***D = create_three_dim_float(550, 270, 390, "random");
	float *C = create_one_dim_float(10, "random");

	for (int b = 4; b < 267; b++)
	  for (int a = 4; a < 545; a++)
	  {
	    
	     float var_a=D[a][b][a]*0.493;
	     float var_b=D[a+5][b+3][a+5]+0.642;
	    
	     D[a][b][a]=D[a][b][a]*C[a]+A[a][b];
	     A[a][b]=D[a-4][b-4][a]+B[a][b]-C[a];
	  }

    return 0;
}