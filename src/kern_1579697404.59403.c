#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(590, "zeros");
	int ***B = create_three_dim_int(340, 550, 230, "zeros");

	for (int b = 0; b < 545; b++)
	  for (int a = 5; a < 335; a++)
	  {
	    
	     B[a][b][a]=B[a-3][b][a-2]-26;
	    
	     B[a][b][a]=B[a+2][b+4][a+5]/50;
	    
	     B[a][b][a]=B[a+5][b+5][a+2]/28;
	    
	     int var_a=A[a]-31;
	     int var_b=A[a-5]+35;
	  }

    return 0;
}