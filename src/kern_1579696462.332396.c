#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **C = create_two_dim_double(260, 440, "random");
	double **A = create_two_dim_double(180, 740, "random");
	double **B = create_two_dim_double(480, 160, "random");

	for (int b = 5; b < 160; b++)
	  for (int a = 5; a < 176; a++)
	  {
	    
	     A[a][b]=0.745;
	     float  var_a=A[a][b]*0.907;
	    
	     B[a][b]=B[a-4][b-4]/0.452;
	    
	     C[a][b]=C[a][b+5]*0.085;
	    
	     A[a][b]=0.949;
	    
	     A[a][b]=C[a][b]-B[a][b]/B[a][b];
	     B[a][b]=C[a-3][b-5]*B[a][b]-A[a][b];
	    
	     C[a][b]=A[a][b]+C[a][b]-0.775;
	     B[a][b]=A[a-5][b-2]*0.671/C[a][b];
	  }

    return 0;
}