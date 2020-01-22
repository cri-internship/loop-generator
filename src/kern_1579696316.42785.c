#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *D = create_one_dim_double(570, "zeros");
	double *C = create_one_dim_double(260, "zeros");
	double ***A = create_three_dim_double(160, 60, 620, "zeros");
	double ***B = create_three_dim_double(1000, 660, 880, "zeros");

	for (int b = 0; b < 657; b++)
	  for (int a = 3; a < 569; a++)
	  {
	    
	     D[a]=D[a+1]+B[a][b][a]/0.661;
	    
	     B[a][b][a]=B[a][b+2][a+1]/D[a]*C[a]+D[a];
	    
	     B[a][b][a]=B[a+4][b+3][a+5]-A[a][b][a]+D[a];
	    
	     D[a]=A[a][b][a]+C[a]-B[a][b][a];
	  }

    return 0;
}