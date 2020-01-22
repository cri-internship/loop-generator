#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(850, 330, "ones");
	double **B = create_two_dim_double(950, 940, "ones");

	for (int b = 0; b < 327; b++)
	  for (int a = 0; a < 848; a++)
	  {
	    
	     A[a][b]=A[a][b+3]*B[a][b];
	    
	     A[a][b]=0.2;
	    
	     double var_b=B[a][b]/0.222;
	     B[a][b]=0.789;
	    
	     B[a][b]=B[a][b]-A[a][b];
	     A[a][b]=B[a+5][b+4]*A[a][b];
	    
	     double var_c=A[a][b]-0.452;
	     double var_d=A[a+2][b+3]+0.338;
	  }

    return 0;
}