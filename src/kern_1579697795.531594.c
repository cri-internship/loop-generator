#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(260, "random");
	double *C = create_one_dim_double(560, "random");
	double **B = create_two_dim_double(520, 850, "random");
	double **D = create_two_dim_double(760, 390, "random");

	for (int c = 0; c < 388; c++)
	  for (int b = 3; b < 260; b++)
	    for (int a = 3; a < 260; a++)
	    {
	      
	      A[a]=A[a-3]*B[a][b];
	      
	      D[a][b]=D[a][b+2]+C[a]*0.208/C[a];
	      
	      B[a][b]=C[a]+D[a][b]*B[a][b]/D[a][b];
	      A[a]=C[a+3]+D[a][b]*A[a];
	    }

    return 0;
}