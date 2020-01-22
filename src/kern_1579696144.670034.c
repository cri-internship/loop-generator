#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(930, "ones");
	double **C = create_two_dim_double(370, 260, "ones");
	double **B = create_two_dim_double(150, 160, "ones");
	double **D = create_two_dim_double(550, 780, "ones");
	double **E = create_two_dim_double(100, 510, "ones");

	for (int c = 3; c < 158; c++)
	  for (int b = 2; b < 100; b++)
	    for (int a = 2; a < 100; a++)
	    {
	      
	      E[a][b]=E[a-1][b-1]-0.607*C[a][b]+D[a][b];
	      
	      A[a]=A[a+2]+0.871;
	      
	      A[a]=0.691;
	      
	      E[a][b]=B[a][b]/D[a][b]+A[a]*C[a][b];
	      
	      B[a][b]=0.689;
	      B[a+3][b+2]=0.42;
	    }

    return 0;
}