#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(450, 100, 690, "random");
	double ***B = create_three_dim_double(460, 980, 340, "random");

	for (int b = 5; b < 98; b++)
	  for (int a = 3; a < 445; a++)
	  {
	    
	     A[a][b][a]=A[a-1][b-4][a-1]*0.81;
	    
	     B[a][b][a]=0.769;
	     B[a][b+1][a+1]=0.195;
	    
	     A[a][b][a]=B[a][b][a];
	  }

    return 0;
}