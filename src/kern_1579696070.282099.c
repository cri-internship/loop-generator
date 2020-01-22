#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(770, 210, 650, "random");
	double ***A = create_three_dim_double(820, 270, 150, "random");

	for (int b = 5; b < 209; b++)
	  for (int a = 5; a < 765; a++)
	  {
	    
	     B[a][b][a]=B[a-5][b-4][a-3]*0.148;
	    
	     B[a][b][a]=B[a-1][b-5][a-3]+A[a][b][a];
	    
	     B[a][b][a]=B[a+5][b+1][a+4]*0.685;
	  }

    return 0;
}