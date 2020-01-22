#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(560, "random");
	double *A = create_one_dim_double(510, "random");
	double **C = create_two_dim_double(690, 750, "random");

	for (int b = 0; b < 749; b++)
	  for (int a = 5; a < 510; a++)
	  {
	    
	     C[a][b]=0.112;
	     C[a+4][b+1]=0.68;
	    
	     A[a]=0.703;
	     A[a]=0.515;
	    
	     A[a]=A[a]*B[a]-C[a][b];
	     B[a]=A[a-5]-C[a][b]*B[a];
	  }

    return 0;
}