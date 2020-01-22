#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **D = create_two_dim_float(700, 160, "zeros");
	float **C = create_two_dim_float(290, 670, "zeros");
	float ***A = create_three_dim_float(830, 990, 230, "zeros");
	float ***B = create_three_dim_float(240, 920, 480, "zeros");

	for (int b = 5; b < 667; b++)
	  for (int a = 4; a < 235; a++)
	  {
	    
	     C[a][b]=C[a][b-2]/A[a][b][a];
	    
	     A[a][b][a]=A[a-4][b][a-4]*D[a][b]+C[a][b]/B[a][b][a];
	    
	     B[a][b][a]=B[a-3][b-4][a-3]+D[a][b]-A[a][b][a];
	    
	     B[a][b][a]=B[a][b+1][a+5]*A[a][b][a];
	    
	     C[a][b]=A[a][b][a]+B[a][b][a];
	    
	     float var_a=C[a][b]/0.403;
	     float var_b=C[a-4][b-5]+0.764;
	  }

    return 0;
}