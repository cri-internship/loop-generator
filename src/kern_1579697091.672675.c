#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(530, "zeros");
	double ***C = create_three_dim_double(950, 860, 370, "zeros");
	double ***B = create_three_dim_double(10, 30, 840, "zeros");

	for (int b = 0; b < 30; b++)
	  for (int a = 2; a < 8; a++)
	  {
	    
	     A[a]=A[a-2]+B[a][b][a]*C[a][b][a];
	    
	     A[a]=0.9;
	    
	     B[a][b][a]=A[a]*A[a];
	     B[a+1][b][a+2]=C[a][b][a]*A[a];
	    
	     double var_b=C[a][b][a]*0.924;
	     double var_c=C[a+4][b+5][a+1]*0.978;
	    
	     double var_d=A[a]*0.725;
	     double var_e=A[a+5]-0.19;
	  }

    return 0;
}