#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(830, 850, 420, "zeros");
	double ***A = create_three_dim_double(860, 1000, 800, "zeros");
	double ***C = create_three_dim_double(890, 800, 150, "zeros");

	for (int b = 5; b < 800; b++)
	  for (int a = 5; a < 825; a++)
	  {
	    
	     C[a][b][a]=C[a-4][b-2][a-4]-B[a][b][a]/A[a][b][a];
	    
	     B[a][b][a]=B[a-5][b-5][a-3]*C[a][b][a]+C[a][b][a];
	    
	     B[a][b][a]=0.733;
	    
	     A[a][b][a]=0.37;
	     A[a-2][b-4][a-1]=0.974;
	    
	     double var_a=B[a][b][a]*0.342;
	     double var_b=B[a+4][b+5][a+3]*0.509;
	    
	     B[a][b][a]=A[a][b][a]-0.449*B[a][b][a];
	     C[a][b][a]=A[a+1][b+2][a+2]-0.959;
	  }

    return 0;
}