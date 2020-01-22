#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***E = create_three_dim_double(110, 850, 500, "zeros");
	double **B = create_two_dim_double(80, 80, "zeros");
	double *D = create_one_dim_double(280, "zeros");
	double **A = create_two_dim_double(840, 840, "zeros");
	double *C = create_one_dim_double(450, "zeros");

	for (int b = 5; b < 80; b++)
	  for (int a = 4; a < 80; a++)
	  {
	    
	     B[a][b]=B[a-4][b-5]/0.774;
	    
	     C[a]=A[a][b]+B[a][b];
	     C[a-4]=D[a]+E[a][b][a]*B[a][b];
	    
	     double var_a=E[a][b][a]*0.476;
	     double var_b=E[a+3][b+5][a+1]*0.191;
	    
	     double var_c=D[a]/0.812;
	     double var_d=D[a+2]/0.265;
	  }

    return 0;
}