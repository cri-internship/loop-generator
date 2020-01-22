#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(460, "random");
	double ***B = create_three_dim_double(500, 920, 230, "random");

	for (int b = 0; b < 915; b++)
	  for (int a = 0; a < 460; a++)
	  {
	    
	     A[a]=B[a][b][a];
	     A[a]=A[a]*B[a][b][a];
	    
	     B[a][b][a]=B[a+3][b+3][a+3]+0.604;
	    
	     B[a][b][a]=B[a+3][b][a+5]/0.884;
	    
	     B[a][b][a]=B[a+3][b+2][a+4]-0.977;
	    
	     double var_a=B[a][b][a]+0.649;
	     double var_b=B[a][b+5][a+5]-0.945;
	    
	     double var_c=A[a]*0.814;
	  }

    return 0;
}