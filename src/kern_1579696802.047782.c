#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(430, 380, "random");
	double **C = create_two_dim_double(1000, 510, "random");
	double **A = create_two_dim_double(600, 400, "random");
	double **D = create_two_dim_double(980, 310, "random");
	double **E = create_two_dim_double(820, 160, "random");

	for (int d = 3; d < 305; d++)
	  for (int c = 0; c < 430; c++)
	    for (int b = 0; b < 430; b++)
	      for (int a = 0; a < 430; a++)
	      {
	        
	       B[a][b]=B[a][b-3]*0.581;
	        
	       D[a][b]=D[a+4][b+5]+0.988;
	        
	       E[a][b]=C[a][b]-E[a][b]+0.239;
	       A[a][b]=C[a+5][b]/D[a][b];
	      }

    return 0;
}