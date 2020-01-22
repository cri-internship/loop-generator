#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(510, 250, 80, "random");
	int ***A = create_three_dim_int(90, 270, 80, "random");

	for (int b = 5; b < 246; b++)
	  for (int a = 5; a < 90; a++)
	  {
	    
	     A[a][b][a]=A[a-2][b-4][a]+B[a][b][a];
	    
	     B[a][b][a]=B[a+2][b+4][a+1]/A[a][b][a];
	    
	     A[a][b][a]=35;
	    
	     B[a][b][a]=A[a][b][a];
	    
	     int var_a=B[a][b][a]*8;
	     int var_b=B[a-5][b][a-5]/28;
	  }

    return 0;
}