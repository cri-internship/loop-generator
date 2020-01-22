#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(300, 20, 380, "ones");
	float ***D = create_three_dim_float(120, 720, 960, "ones");
	float **A = create_two_dim_float(180, 200, "ones");
	float *E = create_one_dim_float(910, "ones");
	float ***B = create_three_dim_float(1000, 70, 530, "ones");

	for (int b = 0; b < 20; b++)
	  for (int a = 0; a < 297; a++)
	  {
	    
	     C[a][b][a]=C[a+3][b][a+3]+0.803;
	  }

    return 0;
}