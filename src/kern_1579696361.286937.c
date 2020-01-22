#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(400, "ones");
	float **D = create_two_dim_float(260, 650, "ones");
	float ***B = create_three_dim_float(690, 740, 320, "ones");
	float ***A = create_three_dim_float(850, 740, 130, "ones");

	for (int b = 5; b < 646; b++)
	  for (int a = 3; a < 257; a++)
	  {
	    
	     D[a][b]=D[a-2][b-5]-C[a]*A[a][b][a];
	    
	     B[a][b][a]=B[a+5][b+2][a+5]/0.231;
	    
	     C[a]=0.546;
	     C[a+5]=0.785;
	    
	     D[a][b]=0.016;
	    
	     B[a][b][a]=D[a][b]/C[a];
	    
	     D[a][b]=C[a]*B[a][b][a];
	     B[a][b][a]=C[a-3]/A[a][b][a]+D[a][b]-B[a][b][a];
	    
	     float var_a=B[a][b][a]/0.563;
	     float var_b=B[a][b-5][a-3]/0.704;
	  }

    return 0;
}