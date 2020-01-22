#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **C = create_two_dim_float(140, 320, "random");
	float ***A = create_three_dim_float(420, 660, 510, "random");
	float ***B = create_three_dim_float(260, 1000, 300, "random");

	for (int b = 3; b < 315; b++)
	  for (int a = 5; a < 137; a++)
	  {
	    
	     C[a][b]=C[a+3][b+5]/A[a][b][a]-B[a][b][a];
	    
	     C[a][b]=0.394;
	    
	     B[a][b][a]=A[a][b][a]/0.162+B[a][b][a];
	     A[a][b][a]=A[a-2][b][a-1]+C[a][b];
	    
	     B[a][b][a]=B[a][b][a]*A[a][b][a]/C[a][b];
	     A[a][b][a]=B[a-2][b-3][a]-A[a][b][a];
	    
	     float var_a=C[a][b]*0.819;
	     float var_b=C[a-5][b-1]+0.209;
	  }

    return 0;
}