#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(70, 690, "random");
	float ***B = create_three_dim_float(400, 560, 830, "random");

	for (int b = 4; b < 556; b++)
	  for (int a = 5; a < 67; a++)
	  {
	    
	     B[a][b][a]=B[a][b-3][a-3]*0.3;
	    
	     B[a][b][a]=B[a+2][b+4][a+3]/A[a][b];
	    
	     B[a][b][a]=A[a][b]+0.215;
	     A[a][b]=A[a+1][b+4]+0.778;
	    
	     float var_a=A[a][b]+0.222;
	     float var_b=A[a-5][b-4]/0.758;
	    
	     float var_c=A[a][b]*0.382;
	     float var_d=A[a+3][b]*0.39;
	  }

    return 0;
}