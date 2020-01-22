#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *C = create_one_dim_double(690, "random");
	double **B = create_two_dim_double(30, 300, "random");
	double ***A = create_three_dim_double(930, 820, 980, "random");

	for (int b = 4; b < 295; b++)
	  for (int a = 5; a < 27; a++)
	  {
	    
	     B[a][b]=B[a-3][b-3]+0.906;
	    
	     B[a][b]=B[a-2][b-2]*C[a]/A[a][b][a];
	    
	     A[a][b][a]=A[a-5][b-1][a-4]*0.9;
	    
	     A[a][b][a]=A[a-3][b-1][a-1]+0.918;
	    
	     B[a][b]=B[a+3][b+5]/A[a][b][a];
	  }

    return 0;
}