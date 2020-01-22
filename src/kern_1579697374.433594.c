#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(360, 330, 540, "zeros");
	double *A = create_one_dim_double(520, "zeros");

	for (int b = 5; b < 330; b++)
	  for (int a = 5; a < 355; a++)
	  {
	    
	     B[a][b][a]=B[a-5][b-5][a-5]-0.783;
	    
	     B[a][b][a]=B[a][b][a+5]+0.619;
	    
	     double var_a=A[a]+0.119;
	     A[a]=0.739;
	    
	     double var_b=B[a][b][a]+0.287;
	     double var_c=B[a-3][b-4][a-5]/0.047;
	    
	     double var_d=B[a][b][a]-0.644;
	     double var_e=B[a][b-3][a-1]*0.575;
	  }

    return 0;
}