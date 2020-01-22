#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(880, 470, 930, "random");
	double *B = create_one_dim_double(740, "random");

	for (int c = 0; c < 930; c++)
	  for (int b = 4; b < 467; b++)
	    for (int a = 5; a < 737; a++)
	    {
	      
	      B[a]=B[a-1]+0.319;
	      
	      B[a]=B[a-2]+0.005;
	      
	      A[a][b][c]=A[a+5][b+3][c]+0.203;
	      
	      A[a][b][c]=0.452;
	      
	      B[a]=B[a]/A[a][b][c];
	      A[a][b][c]=B[a+3]-A[a][b][c];
	    }

    return 0;
}