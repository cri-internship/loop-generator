#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(270, 880, "random");
	int **C = create_two_dim_int(230, 320, "random");
	int **D = create_two_dim_int(960, 680, "random");
	int ***A = create_three_dim_int(450, 630, 350, "random");

	for (int b = 3; b < 320; b++)
	  for (int a = 2; a < 230; a++)
	  {
	    
	     B[a][b]=B[a+2][b+5]-C[a][b];
	    
	     int var_a=C[a][b]+8;
	     int var_b=C[a][b-3]*39;
	    
	     int var_c=B[a][b]+43;
	     int var_d=B[a+3][b+2]-38;
	    
	     int var_e=B[a][b]-23;
	     int var_f=B[a-2][b-3]+46;
	  }

    return 0;
}