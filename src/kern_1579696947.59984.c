#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(750, 510, 160, "random");
	double *E = create_one_dim_double(540, "random");
	double *C = create_one_dim_double(330, "random");
	double **A = create_two_dim_double(670, 270, "random");
	double *D = create_one_dim_double(840, "random");

	for (int c = 0; c < 156; c++)
	  for (int b = 5; b < 270; b++)
	    for (int a = 5; a < 537; a++)
	    {
	      
	      E[a]=E[a-2]*A[a][b]-0.339;
	      
	      E[a]=E[a+3]*0.515;
	      
	      D[a]=D[a+3]/0.403;
	      
	      A[a][b]=0.697;
	      A[a-5][b-5]=0.576;
	      
	      double var_a=B[a][b][c]/0.24;
	      double var_b=B[a+2][b+5][c+4]/0.64;
	      
	      double var_c=D[a]-0.47;
	      double var_d=D[a+1]/0.74;
	    }

    return 0;
}