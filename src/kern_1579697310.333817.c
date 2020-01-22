#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(130, 510, 570, "ones");
	double **D = create_two_dim_double(450, 680, "ones");
	double **C = create_two_dim_double(450, 950, "ones");
	double ***B = create_three_dim_double(220, 730, 160, "ones");

	for (int b = 5; b < 505; b++)
	  for (int a = 5; a < 125; a++)
	  {
	    
	     D[a][b]=D[a-5][b-4]*B[a][b][a]+C[a][b]-A[a][b][a];
	    
	     A[a][b][a]=A[a][b-5][a-1]-0.76;
	    
	     C[a][b]=C[a][b+3]-0.869;
	    
	     B[a][b][a]=D[a][b];
	     B[a-3][b-5][a]=A[a][b][a]-D[a][b]/C[a][b];
	    
	     double var_a=C[a][b]-0.63;
	     double var_b=C[a][b-3]*0.033;
	    
	     double var_c=D[a][b]*0.041;
	     double var_d=D[a+5][b+3]/0.652;
	    
	     double var_e=A[a][b][a]-0.683;
	     double var_f=A[a+1][b+5][a+5]-0.593;
	  }

    return 0;
}