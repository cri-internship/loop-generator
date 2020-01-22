#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***C = create_three_dim_double(780, 480, 20, "ones");
	double **A = create_two_dim_double(450, 590, "ones");
	double ***B = create_three_dim_double(740, 530, 770, "ones");
	double **D = create_two_dim_double(80, 30, "ones");

	for (int b = 3; b < 30; b++)
	  for (int a = 4; a < 75; a++)
	  {
	    
	     D[a][b]=D[a-3][b-3]*0.137;
	    
	     C[a][b][a]=C[a+4][b+4][a+4]*A[a][b]+B[a][b][a];
	    
	     A[a][b]=D[a][b]/C[a][b][a];
	     A[a-4][b-3]=0.372*B[a][b][a];
	    
	     double var_a=D[a][b]/0.627;
	     double var_b=D[a+5][b]-0.031;
	    
	     A[a][b]=D[a][b]+C[a][b][a];
	     B[a][b][a]=D[a+4][b]*0.314;
	  }

    return 0;
}