#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(720, 870, "random");
	int **D = create_two_dim_int(620, 120, "random");
	int ***C = create_three_dim_int(320, 730, 270, "random");
	int ***B = create_three_dim_int(520, 930, 690, "random");
	int ***E = create_three_dim_int(130, 10, 170, "random");

	for (int b = 5; b < 727; b++)
	  for (int a = 5; a < 315; a++)
	  {
	    
	     B[a][b][a]=B[a-4][b-5][a-3]*E[a][b][a]/D[a][b];
	    
	     B[a][b][a]=B[a+5][b+1][a+2]-47;
	    
	     C[a][b][a]=20;
	     C[a-3][b-4][a-5]=3;
	    
	     C[a][b][a]=B[a][b][a]-A[a][b]+B[a][b][a]*E[a][b][a];
	    
	     int var_a=C[a][b][a]-36;
	     int var_b=C[a+3][b+3][a+5]+39;
	  }

    return 0;
}