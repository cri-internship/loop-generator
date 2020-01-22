#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(530, 60, "random");
	double ***B = create_three_dim_double(530, 520, 210, "random");

	for (int c = 0; c < 205; c++)
	  for (int b = 0; b < 57; b++)
	    for (int a = 0; a < 525; a++)
	    {
	      
	      B[a][b][c]=B[a+5][b+1][c+1]*0.593;
	      
	      A[a][b]=A[a+1][b+3]/0.679;
	      
	      B[a][b][c]=0.832;
	      
	      double var_a=B[a][b][c]-0.254;
	      double var_b=B[a+1][b+5][c+2]/0.301;
	      
	      double var_c=B[a][b][c]-0.366;
	      double var_d=B[a+1][b+1][c+5]-0.049;
	      
	      double var_e=B[a][b][c]-0.609;
	      double var_f=B[a+2][b+3][c]+0.171;
	    }

    return 0;
}