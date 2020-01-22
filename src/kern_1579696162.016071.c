#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***E = create_three_dim_float(770, 700, 760, "ones");
	float *B = create_one_dim_float(30, "ones");
	float ***C = create_three_dim_float(340, 70, 890, "ones");
	float **A = create_two_dim_float(580, 60, "ones");
	float ***D = create_three_dim_float(60, 530, 450, "ones");

	for (int b = 2; b < 70; b++)
	  for (int a = 2; a < 58; a++)
	  {
	    
	     C[a][b][a]=C[a-2][b-2][a-1]+0.693;
	    
	     D[a][b][a]=D[a+1][b+1][a+2]-E[a][b][a]/B[a];
	  }

    return 0;
}