#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(680, 770, 110, "random");
	int ***A = create_three_dim_int(350, 190, 910, "random");
	int *C = create_one_dim_int(940, "random");

	for (int b = 1; b < 190; b++)
	  for (int a = 5; a < 350; a++)
	  {
	    
	     B[a][b][a]=B[a+5][b+2][a]/40;
	    
	     int var_a=A[a][b][a]*26;
	     int var_b=A[a-3][b-1][a-5]/10;
	  }

    return 0;
}