#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***E = create_three_dim_int(920, 40, 620, "random");
	int ***C = create_three_dim_int(920, 50, 460, "random");
	int ***B = create_three_dim_int(330, 960, 160, "random");
	int ***A = create_three_dim_int(920, 550, 360, "random");
	int *D = create_one_dim_int(340, "random");

	for (int b = 5; b < 960; b++)
	  for (int a = 5; a < 330; a++)
	  {
	    
	     B[a][b][a]=B[a-5][b-5][a-5]+39;
	    
	     int var_a=D[a]*14;
	     int var_b=D[a]-35;
	  }

    return 0;
}