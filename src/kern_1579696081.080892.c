#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **D = create_two_dim_int(490, 540, "random");
	int **A = create_two_dim_int(260, 380, "random");
	int **B = create_two_dim_int(340, 360, "random");
	int **E = create_two_dim_int(510, 160, "random");
	int *C = create_one_dim_int(500, "random");

	for (int c = 4; c < 160; c++)
	  for (int b = 5; b < 486; b++)
	    for (int a = 5; a < 486; a++)
	    {
	      
	      C[a]=C[a-5]/25;
	      
	      D[a][b]=D[a+4][b+3]*9;
	      
	      int var_a=E[a][b]/31;
	      int var_b=E[a+5][b]+11;
	      
	      int var_c=D[a][b]/22;
	      int var_d=D[a-3][b-4]/18;
	      
	      int var_e=D[a][b]*12;
	      int var_f=D[a+4][b+5]+27;
	    }

    return 0;
}