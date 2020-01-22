#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **C = create_two_dim_float(250, 980, "zeros");
	float **D = create_two_dim_float(840, 410, "zeros");
	float **A = create_two_dim_float(410, 60, "zeros");
	float **B = create_two_dim_float(1000, 910, "zeros");
	float **E = create_two_dim_float(930, 670, "zeros");

	for (int b = 5; b < 58; b++)
	  for (int a = 5; a < 250; a++)
	  {
	    
	     C[a][b]=C[a-3][b-5]*D[a][b]/E[a][b]+B[a][b]-A[a][b];
	    
	     E[a][b]=E[a][b-1]+0.638;
	    
	     A[a][b]=A[a][b+2]-0.519;
	    
	     E[a][b]=E[a+4][b+2]/0.32;
	    
	     A[a][b]=C[a][b]+D[a][b]/C[a][b]*E[a][b];
	    
	     D[a][b]=B[a][b]-A[a][b]+E[a][b];
	     D[a-5][b]=C[a][b]-A[a][b];
	    
	     A[a][b]=B[a][b]-C[a][b]+A[a][b]/D[a][b];
	     B[a][b]=B[a+4][b]-C[a][b]/A[a][b];
	  }

    return 0;
}