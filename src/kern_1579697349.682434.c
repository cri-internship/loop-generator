#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(270, 470, 500, "random");
	int ***E = create_three_dim_int(290, 610, 210, "random");
	int *B = create_one_dim_int(820, "random");
	int **C = create_two_dim_int(580, 250, "random");
	int *D = create_one_dim_int(350, "random");

	for (int d = 0; d < 210; d++)
	  for (int c = 3; c < 245; c++)
	    for (int b = 5; b < 290; b++)
	      for (int a = 5; a < 290; a++)
	      {
	        
	       E[a][b][c]=E[a-5][b-3][c]-30;
	        
	       C[a][b]=C[a][b+5]+4;
	      }

    return 0;
}