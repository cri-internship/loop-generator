#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(840, 360, 80, "ones");
	float ***A = create_three_dim_float(420, 200, 80, "ones");
	float ***C = create_three_dim_float(960, 840, 430, "ones");

	for (int c = 1; c < 77; c++)
	  for (int b = 0; b < 197; b++)
	    for (int a = 2; a < 417; a++)
	    {
	      
	      A[a][b][c]=A[a+3][b+3][c+3]-0.36;
	      
	      B[a][b][c]=0.696;
	      B[a-2][b][c-1]=0.269;
	    }

    return 0;
}