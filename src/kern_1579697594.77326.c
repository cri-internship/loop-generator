#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **C = create_two_dim_float(570, 70, "random");
	float **B = create_two_dim_float(110, 140, "random");
	float **A = create_two_dim_float(80, 550, "random");

	for (int c = 4; c < 70; c++)
	  for (int b = 5; b < 80; b++)
	    for (int a = 5; a < 80; a++)
	    {
	      
	      A[a][b]=A[a-3][b-1]-0.502;
	      
	      C[a][b]=C[a+5][b]+A[a][b];
	      
	      A[a][b]=0.23;
	      
	      float var_a=B[a][b]+0.524;
	      float var_b=B[a][b-4]-0.51;
	      
	      float var_c=B[a][b]/0.139;
	      
	      B[a][b]=C[a][b]*0.292;
	      C[a][b]=C[a-5][b-1]*A[a][b]/B[a][b];
	    }

    return 0;
}