#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **C = create_two_dim_float(470, 530, "ones");
	float ***A = create_three_dim_float(110, 250, 800, "ones");
	float ***E = create_three_dim_float(150, 400, 160, "ones");
	float ***B = create_three_dim_float(960, 480, 480, "ones");
	float **D = create_two_dim_float(690, 800, "ones");

	for (int b = 0; b < 250; b++)
	  for (int a = 0; a < 105; a++)
	  {
	    
	     A[a][b][a]=A[a+2][b][a+5]/B[a][b][a]+0.023-C[a][b]*E[a][b][a];
	  }

    return 0;
}