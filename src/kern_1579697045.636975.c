#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(820, "random");
	double ***A = create_three_dim_double(310, 650, 840, "random");

	for (int b = 5; b < 645; b++)
	  for (int a = 3; a < 307; a++)
	  {
	    
	     A[a][b][a]=A[a-2][b-5][a-3]/0.959;
	    
	     A[a][b][a]=A[a+3][b][a]+0.313;
	    
	     A[a][b][a]=A[a+2][b+5][a]-0.332;
	  }

    return 0;
}