#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(320, 120, 380, "random");
	float ***A = create_three_dim_float(320, 200, 770, "random");

	for (int c = 0; c < 770; c++)
	  for (int b = 0; b < 197; b++)
	    for (int a = 0; a < 315; a++)
	    {
	      
	      A[a][b][c]=A[a+5][b+3][c]*0.833;
	    }

    return 0;
}