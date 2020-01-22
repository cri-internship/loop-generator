#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***C = create_three_dim_double(920, 860, 850, "ones");
	double **A = create_two_dim_double(470, 940, "ones");
	double **E = create_two_dim_double(1000, 370, "ones");
	double *B = create_one_dim_double(610, "ones");
	double ***D = create_three_dim_double(870, 770, 930, "ones");

	for (int b = 5; b < 367; b++)
	  for (int a = 4; a < 610; a++)
	  {
	    
	     C[a][b][a]=C[a-1][b-5][a-1]+D[a][b][a]-B[a];
	    
	     C[a][b][a]=C[a][b-4][a-4]-0.033;
	    
	     C[a][b][a]=C[a+3][b+4][a+4]/A[a][b];
	    
	     double var_a=B[a]/0.313;
	     double var_b=B[a]-0.418;
	    
	     E[a][b]=E[a][b]+C[a][b][a]-A[a][b]/B[a]*0.556;
	     A[a][b]=E[a+4][b+3]-C[a][b][a]/D[a][b][a]+B[a];
	    
	     double var_c=D[a][b][a]/0.615;
	     double var_d=D[a+4][b+3][a+4]+0.683;
	  }

    return 0;
}