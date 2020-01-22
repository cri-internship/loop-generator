#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *C = create_one_dim_double(220, "ones");
	double *A = create_one_dim_double(120, "ones");
	double **D = create_two_dim_double(960, 910, "ones");
	double *B = create_one_dim_double(70, "ones");
	double **E = create_two_dim_double(700, 480, "ones");

	for (int b = 1; b < 478; b++)
	  for (int a = 4; a < 67; a++)
	  {
	    
	     D[a][b]=D[a][b-1]+0.099;
	    
	     C[a]=C[a-4]*E[a][b];
	    
	     A[a]=C[a];
	     E[a][b]=A[a]*D[a][b]/B[a]+D[a][b];
	    
	     C[a]=C[a+3]*0.296;
	    
	     B[a]=0.455;
	     B[a+3]=0.739;
	    
	     D[a][b]=E[a][b]-A[a]+A[a]*C[a];
	     A[a]=E[a][b+2]-0.241;
	  }

    return 0;
}