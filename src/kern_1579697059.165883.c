#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(30, 100, 770, "ones");
	int *A = create_one_dim_int(970, "ones");

	for (int b = 0; b < 97; b++)
	  for (int a = 5; a < 26; a++)
	  {
	    
	     A[a]=A[a-5]-45;
	    
	     B[a][b][a]=B[a][b][a-5]*9;
	    
	     B[a][b][a]=B[a][b+1][a+2]-12;
	    
	     B[a][b][a]=B[a+4][b+3][a+1]/5;
	    
	     A[a]=0;
	  }

    return 0;
}