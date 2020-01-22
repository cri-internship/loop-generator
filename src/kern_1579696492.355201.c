#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(630, 20, 830, "zeros");
	double ***B = create_three_dim_double(20, 680, 290, "zeros");

	for (int b = 4; b < 20; b++)
	  for (int a = 5; a < 17; a++)
	  {
	    
	     A[a][b][a]=A[a-2][b-1][a-2]/0.664;
	    
	     B[a][b][a]=B[a-5][b-4][a-3]*A[a][b][a];
	    
	     A[a][b][a]=B[a][b][a]-A[a][b][a];
	     B[a][b][a]=B[a+2][b][a+3]-A[a][b][a];
	  }

    return 0;
}