#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(10, 490, "zeros");
	double **A = create_two_dim_double(180, 20, "zeros");
	double **D = create_two_dim_double(850, 470, "zeros");
	double *C = create_one_dim_double(490, "zeros");

	for (int c = 5; c < 20; c++)
	  for (int b = 5; b < 180; b++)
	    for (int a = 5; a < 180; a++)
	    {
	      
	      A[a][b]=A[a-1][b-1]/0.664;
	      
	      D[a][b]=0.224;
	      D[a][b-1]=0.912;
	      
	      A[a][b]=0.204*C[a];
	      
	      double var_a=C[a]+0.117;
	      double var_b=C[a-2]*0.163;
	      
	      double var_c=C[a]-0.156;
	      double var_d=C[a+1]*0.917;
	    }

    return 0;
}