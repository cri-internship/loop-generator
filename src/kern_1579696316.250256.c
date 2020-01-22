#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(890, 350, "zeros");
	double *A = create_one_dim_double(750, "zeros");

	for (int b = 5; b < 350; b++)
	  for (int a = 5; a < 745; a++)
	  {
	    
	     B[a][b]=B[a-2][b-5]*0.345;
	    
	     A[a]=A[a+5]*0.324;
	    
	     A[a]=A[a+4]+B[a][b];
	    
	     B[a][b]=B[a][b]*A[a];
	     B[a][b]=A[a];
	    
	     A[a]=B[a][b]+0.815;
	     A[a]=B[a-4][b]*0.056;
	  }

    return 0;
}