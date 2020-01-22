#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **C = create_two_dim_double(620, 970, "zeros");
	double *B = create_one_dim_double(760, "zeros");
	double *D = create_one_dim_double(850, "zeros");
	double ***A = create_three_dim_double(100, 940, 700, "zeros");
	double **E = create_two_dim_double(560, 760, "zeros");

	for (int b = 5; b < 850; b++)
	  for (int a = 5; a < 850; a++)
	  {
	    
	     B[a]=D[a]+A[a][b][a]*C[a][b]-0.521;
	     D[a]=D[a-5]-E[a][b]/0.114;
	  }

    return 0;
}