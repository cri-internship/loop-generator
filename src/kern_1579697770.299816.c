#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(780, "random");
	int ***A = create_three_dim_int(90, 530, 370, "random");
	int *C = create_one_dim_int(250, "random");
	int *D = create_one_dim_int(820, "random");

	for (int d = 0; d < 370; d++)
	  for (int c = 0; c < 530; c++)
	    for (int b = 5; b < 90; b++)
	      for (int a = 5; a < 90; a++)
	      {
	        
	       A[a][b][c]=A[a-5][b][c]+29;
	      }

    return 0;
}