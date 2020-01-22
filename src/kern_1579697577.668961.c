#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(980, 870, 80, "zeros");
	double **A = create_two_dim_double(440, 770, "zeros");

	for (int b = 5; b < 770; b++)
	  for (int a = 3; a < 437; a++)
	  {
	    
	     A[a][b]=A[a-3][b-2]+0.592;
	    
	     B[a][b][a]=0.87;
	     B[a+3][b][a+4]=0.758;
	    
	     double var_a=A[a][b]/0.284;
	     double var_b=A[a+3][b]+0.088;
	    
	     A[a][b]=B[a][b][a]*A[a][b];
	     B[a][b][a]=B[a-1][b-3][a-2]-A[a][b];
	    
	     double var_c=B[a][b][a]+0.894;
	     double var_d=B[a][b-5][a-3]*0.592;
	    
	     double var_e=A[a][b]-0.609;
	     double var_f=A[a-1][b]/0.095;
	  }

    return 0;
}