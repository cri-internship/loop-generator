#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **D = create_two_dim_double(330, 870, "random");
	double **E = create_two_dim_double(890, 520, "random");
	double ***B = create_three_dim_double(310, 700, 650, "random");
	double *C = create_one_dim_double(580, "random");
	double **A = create_two_dim_double(590, 880, "random");

	for (int b = 4; b < 520; b++)
	  for (int a = 5; a < 310; a++)
	  {
	    
	     D[a][b]=D[a][b-4]*0.7;
	    
	     D[a][b]=D[a-1][b-4]*0.238;
	    
	     double var_a=E[a][b]*0.454;
	     E[a][b]=0.808;
	    
	     E[a][b]=0.773;
	    
	     double var_b=B[a][b][a]+0.893;
	     double var_c=B[a-5][b][a]*0.157;
	    
	     double var_d=A[a][b]*0.923;
	     double var_e=A[a+1][b+3]-0.311;
	  }

    return 0;
}