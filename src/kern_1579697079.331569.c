#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(710, 940, 350, "random");
	double ***A = create_three_dim_double(240, 570, 580, "random");
	double *C = create_one_dim_double(740, "random");

	for (int b = 4; b < 566; b++)
	  for (int a = 5; a < 237; a++)
	  {
	    
	     B[a][b][a]=B[a-4][b-1][a-4]/C[a];
	    
	     B[a][b][a]=0.682;
	    
	     A[a][b][a]=B[a][b][a]*B[a][b][a];
	     A[a-2][b-4][a-4]=C[a]*B[a][b][a];
	    
	     A[a][b][a]=0.075;
	    
	     double var_a=A[a][b][a]+0.895;
	     double var_b=A[a+2][b+4][a+3]+0.131;
	    
	     B[a][b][a]=C[a]+B[a][b][a];
	     A[a][b][a]=C[a+4]-0.107;
	  }

    return 0;
}