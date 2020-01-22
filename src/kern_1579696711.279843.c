#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(820, "random");
	double ***B = create_three_dim_double(330, 740, 760, "random");
	double ***C = create_three_dim_double(880, 700, 880, "random");

	for (int b = 5; b < 700; b++)
	  for (int a = 5; a < 330; a++)
	  {
	    
	     B[a][b][a]=B[a-5][b-5][a-2]-C[a][b][a];
	    
	     A[a]=A[a-5]*0.958;
	    
	     C[a][b][a]=0.608;
	     C[a-4][b-2][a-1]=0.469;
	    
	     double var_a=B[a][b][a]-0.695;
	    
	     B[a][b][a]=B[a][b][a]+0.052;
	     C[a][b][a]=B[a][b+5][a]/A[a]-0.923;
	    
	     double var_c=A[a]/0.977;
	     double var_d=A[a-3]*0.199;
	  }

    return 0;
}