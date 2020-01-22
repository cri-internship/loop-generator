#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(730, 70, 680, "ones");
	double *A = create_one_dim_double(500, "ones");
	double ***C = create_three_dim_double(830, 810, 520, "ones");

	for (int b = 2; b < 67; b++)
	  for (int a = 5; a < 497; a++)
	  {
	    
	     double var_a=A[a]*0.517;
	     A[a]=0.053;
	    
	     A[a]=B[a][b][a];
	    
	     B[a][b][a]=0.553;
	     B[a+2][b+3][a]=A[a]/C[a][b][a];
	    
	     C[a][b][a]=B[a][b][a]+A[a];
	     C[a][b-2][a-5]=B[a][b][a]+A[a];
	    
	     double var_b=A[a]*0.845;
	     double var_c=A[a-1]+0.814;
	  }

    return 0;
}