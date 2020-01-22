#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(660, "random");
	int ***B = create_three_dim_int(530, 370, 530, "random");

	for (int c = 0; c < 525; c++)
	  for (int b = 0; b < 367; b++)
	    for (int a = 5; a < 528; a++)
	    {
	      
	      A[a]=A[a-5]-6;
	      
	      B[a][b][c]=B[a+2][b+3][c+5]-30;
	    }

    return 0;
}