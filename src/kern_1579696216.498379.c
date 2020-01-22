#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(580, 330, 380, "zeros");
	float ***C = create_three_dim_float(710, 710, 160, "zeros");
	float *B = create_one_dim_float(620, "zeros");

	for (int b = 5; b < 327; b++)
	  for (int a = 5; a < 575; a++)
	  {
	    
	     A[a][b][a]=A[a-5][b-5][a-4]*0.107;
	    
	     A[a][b][a]=A[a+5][b+3][a+5]-B[a];
	    
	     B[a]=B[a+3]*0.474;
	    
	     float var_a=C[a][b][a]+0.644;
	     float var_b=C[a-1][b-4][a-4]*0.151;
	    
	     float var_c=C[a][b][a]*0.659;
	     float var_d=C[a+4][b+1][a+3]+0.747;
	  }

    return 0;
}