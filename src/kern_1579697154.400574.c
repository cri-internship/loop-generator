#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(120, 930, 400, "random");
	int ***A = create_three_dim_int(640, 200, 310, "random");

	for (int b = 5; b < 195; b++)
	  for (int a = 5; a < 120; a++)
	  {
	    
	     B[a][b][a]=B[a-5][b-5][a-5]*19;
	    
	     A[a][b][a]=A[a+5][b+5][a]-B[a][b][a];
	    
	     A[a][b][a]=B[a][b][a];
	    
	     A[a][b][a]=A[a][b][a]*12;
	     B[a][b][a]=A[a+4][b+3][a+5]-31;
	  }

    return 0;
}