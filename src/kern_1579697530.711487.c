#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***C = create_three_dim_double(780, 400, 100, "ones");
	double **A = create_two_dim_double(640, 960, "ones");
	double **D = create_two_dim_double(480, 160, "ones");
	double ***B = create_three_dim_double(330, 480, 530, "ones");

	for (int b = 4; b < 159; b++)
	  for (int a = 5; a < 475; a++)
	  {
	    
	     D[a][b]=D[a-5][b-1]-0.909;
	    
	     D[a][b]=D[a-2][b-4]*A[a][b];
	    
	     D[a][b]=D[a+4][b+1]+0.49;
	    
	     C[a][b][a]=0.699;
	     C[a+5][b][a+2]=0.013;
	    
	     double var_a=A[a][b]-0.313;
	     double var_b=A[a+5][b+2]/0.862;
	    
	     double var_c=D[a][b]-0.458;
	     double var_d=D[a][b-3]*0.303;
	    
	     C[a][b][a]=D[a][b]-C[a][b][a];
	     A[a][b]=D[a+5][b+1]-B[a][b][a];
	  }

    return 0;
}