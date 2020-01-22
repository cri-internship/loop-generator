#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(820, 340, 460, "ones");
	double ***B = create_three_dim_double(570, 770, 140, "ones");

	for (int b = 0; b < 338; b++)
	  for (int a = 4; a < 815; a++)
	  {
	    
	     A[a][b][a]=A[a+4][b+2][a+1]/0.153;
	    
	     A[a][b][a]=0.17;
	    
	     A[a][b][a]=A[a][b][a]-B[a][b][a];
	     B[a][b][a]=A[a-4][b][a-2]*B[a][b][a];
	  }

    return 0;
}