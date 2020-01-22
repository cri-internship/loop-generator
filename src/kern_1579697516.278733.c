#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(130, "random");
	float ***B = create_three_dim_float(850, 700, 520, "random");
	float **D = create_two_dim_float(330, 180, "random");
	float *A = create_one_dim_float(760, "random");

	for (int b = 2; b < 696; b++)
	  for (int a = 5; a < 758; a++)
	  {
	    
	     B[a][b][a]=B[a-5][b-2][a-4]-0.543;
	    
	     A[a]=A[a+2]*B[a][b][a];
	    
	     A[a]=C[a];
	    
	     float var_a=B[a][b][a]-0.061;
	     float var_b=B[a][b+4][a+1]/0.109;
	  }

    return 0;
}