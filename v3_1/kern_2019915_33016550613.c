#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(70, "random");
	int ***A = create_three_dim_int(100, 150, 50, "random");

	for (int c = 0; c < 48; c++)
	  for (int b = 0; b < 148; b++)
	    for (int a = 0; a < 98; a++)
	    {
	      
	      A[a+2][b+2][c+2]=22;
	      A[a][b][c]=A[a+2][b+2][c+2]/46;
	    }

    return 0;
}