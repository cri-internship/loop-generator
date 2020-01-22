#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(470, "random");
	int ***B = create_three_dim_int(970, 720, 330, "random");

	for (int b = 0; b < 715; b++)
	  for (int a = 5; a < 470; a++)
	  {
	    
	     B[a][b][a]=B[a+4][b+5][a+1]*23;
	    
	     int var_a=A[a]-36;
	     int var_b=A[a-5]-2;
	  }

    return 0;
}