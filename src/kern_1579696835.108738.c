#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *D = create_one_dim_double(770, "zeros");
	double **C = create_two_dim_double(290, 500, "zeros");
	double *B = create_one_dim_double(220, "zeros");
	double ***A = create_three_dim_double(740, 870, 380, "zeros");

	for (int b = 0; b < 870; b++)
	  for (int a = 4; a < 218; a++)
	  {
	    
	     D[a]=D[a+5]-0.027;
	    
	     A[a][b][a]=B[a]/C[a][b];
	     A[a][b][a+2]=0.38-D[a]*B[a];
	    
	     B[a]=B[a]-A[a][b][a]/A[a][b][a];
	     C[a][b]=B[a-4]/C[a][b]*A[a][b][a];
	    
	     A[a][b][a]=B[a]-A[a][b][a]*0.239+C[a][b];
	     D[a]=B[a+2]+A[a][b][a]*0.364-C[a][b];
	  }

    return 0;
}