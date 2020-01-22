#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(190, 290, "random");
	double ***A = create_three_dim_double(860, 550, 530, "random");

	for (int b = 1; b < 289; b++)
	  for (int a = 1; a < 186; a++)
	  {
	    
	     B[a][b]=B[a-1][b]-A[a][b][a];
	    
	     A[a][b][a]=A[a+4][b][a+4]/B[a][b];
	    
	     B[a][b]=B[a][b]*A[a][b][a];
	     A[a][b][a]=B[a-1][b-1]/A[a][b][a];
	    
	     A[a][b][a]=B[a][b]+A[a][b][a];
	     B[a][b]=B[a+4][b+1]+A[a][b][a];
	  }

    return 0;
}