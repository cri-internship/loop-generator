#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *D = create_one_dim_float(820, "ones");
	float **C = create_two_dim_float(30, 930, "ones");
	float **A = create_two_dim_float(850, 100, "ones");
	float **B = create_two_dim_float(860, 870, "ones");

	for (int c = 0; c < 868; c++)
	  for (int b = 0; b < 25; b++)
	    for (int a = 0; a < 25; a++)
	    {
	      
	      C[a][b]=C[a+5][b+2]*0.599;
	      
	      D[a]=D[a+2]/A[a][b]*B[a][b];
	      
	      B[a][b]=0.685+C[a][b]*A[a][b];
	      B[a][b+2]=D[a]/C[a][b];
	      
	      D[a]=0.752;
	      
	      float var_a=D[a]/0.302;
	    }

    return 0;
}