#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(130, 60, "ones");
	double **C = create_two_dim_double(390, 290, "ones");
	double **A = create_two_dim_double(890, 610, "ones");

	for (int b = 1; b < 56; b++)
	  for (int a = 5; a < 125; a++)
	  {
	    
	     C[a][b]=C[a-5][b-1]/0.211;
	    
	     B[a][b]=B[a+4][b+3]+0.612;
	    
	     B[a][b]=B[a][b]*A[a][b]-C[a][b];
	     A[a][b]=B[a+5][b+4]-A[a][b]*C[a][b];
	  }

    return 0;
}