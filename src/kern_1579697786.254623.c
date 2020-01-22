#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(80, 960, 970, "zeros");
	double ***B = create_three_dim_double(10, 360, 60, "zeros");

	for (int b = 2; b < 357; b++)
	  for (int a = 5; a < 9; a++)
	  {
	    
	     B[a][b][a]=B[a-2][b-2][a-5]+0.364;
	    
	     A[a][b][a]=A[a+5][b+2][a+1]*0.018;
	    
	     B[a][b][a]=0.59;
	  }

    return 0;
}