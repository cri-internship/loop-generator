#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(970, 260, 240, "zeros");
	float ***C = create_three_dim_float(400, 770, 720, "zeros");
	float **B = create_two_dim_float(430, 130, "zeros");

	for (int b = 0; b < 258; b++)
	  for (int a = 0; a < 968; a++)
	  {
	    
	     A[a][b][a]=0.173;
	     A[a+1][b+2][a+2]=0.515;
	  }

    return 0;
}