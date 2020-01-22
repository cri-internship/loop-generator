#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(580, 20, "ones");
	double **C = create_two_dim_double(350, 30, "ones");
	double ***D = create_three_dim_double(870, 540, 830, "ones");
	double **E = create_two_dim_double(410, 50, "ones");
	double ***B = create_three_dim_double(510, 200, 910, "ones");

	for (int b = 3; b < 17; b++)
	  for (int a = 5; a < 510; a++)
	  {
	    
	     A[a][b]=A[a+3][b+3]-B[a][b][a]/C[a][b];
	    
	     double var_a=B[a][b][a]-0.247;
	     double var_b=B[a][b-2][a]*0.716;
	    
	     double var_c=B[a][b][a]-0.171;
	     double var_d=B[a-1][b-3][a-5]/0.426;
	  }

    return 0;
}