#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *D = create_one_dim_double(410, "zeros");
	double ***C = create_three_dim_double(250, 30, 420, "zeros");
	double **B = create_two_dim_double(540, 660, "zeros");
	double **A = create_two_dim_double(550, 20, "zeros");

	for (int b = 5; b < 15; b++)
	  for (int a = 5; a < 246; a++)
	  {
	    
	     D[a]=D[a-2]*0.698;
	    
	     A[a][b]=A[a+3][b+5]+0.612;
	    
	     A[a][b]=0.535;
	    
	     C[a][b][a]=0.821;
	     C[a+4][b+3][a+2]=0.404;
	    
	     double var_b=C[a][b][a]*0.165;
	     double var_c=C[a-2][b-5][a-5]-0.892;
	  }

    return 0;
}