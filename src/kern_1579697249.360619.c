#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(280, 900, "zeros");
	double **B = create_two_dim_double(820, 730, "zeros");
	double **C = create_two_dim_double(460, 830, "zeros");

	for (int c = 0; c < 830; c++)
	  for (int b = 0; b < 277; b++)
	    for (int a = 0; a < 277; a++)
	    {
	      
	      A[a][b]=A[a+3][b+2]*C[a][b];
	      
	      A[a][b]=C[a][b]*A[a][b]+B[a][b];
	    }

    return 0;
}