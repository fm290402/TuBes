/*Program : ComputerMove5x5.c
* Deskripsi : Pergerakan Komputer pada papan 7x7.
* Nama : Fadhil Muhammad
* tanggal/ versi : 19 - januari - 2021 sampai 06 - februari - 2021 / 2
*/

void computer_move_5X5()
{
	int i,j;
	// Pengecekan Baris.

	// Jika papan 1, 2, dan, 4 adalah 'X' atau 'O' maka papan 3 atau 5 adalah 'O'
	for(i=0;i<5;i++){

		if((matrix[i][0]=='X'&& matrix[i][1]=='X')||(matrix[i][1]=='X'&& matrix[i][3]=='X')){									
			if(matrix[i][2]==' '){
				matrix[i][2]='O';
				return;
			}
			else if(matrix[i][4]==' '){
				matrix[i][4]='O';
				return;
			}
		}
	}

	for(i=0;i<5;i++){

		if((matrix[i][0]=='O'&& matrix[i][1]=='O')||(matrix[i][1]=='O'&& matrix[i][3]=='O')){									
			if(matrix[i][2]==' '){
				matrix[i][2]='O';
				return;
			}
			else if(matrix[i][4]==' '){
				matrix[i][4]='O';
				return;
			}
		}
	}

	// Jika papan 1, 2, dan, 5 adalah 'X' atau 'O' maka papan 3 atau 4 adalah 'O'
	for(i=0;i<5;i++){

		if((matrix[i][0]=='X'&& matrix[i][1]=='X')||(matrix[i][1]=='X'&& matrix[i][4]=='X')){									
			if(matrix[i][2]==' '){
				matrix[i][2]='O';
				return;
			}
			else if(matrix[i][3]==' '){
				matrix[i][3]='O';
				return;
			}
		}
	}

	for(i=0;i<5;i++){

		if((matrix[i][0]=='O'&& matrix[i][1]=='O')||(matrix[i][1]=='O'&& matrix[i][4]=='O')){									
			if(matrix[i][2]==' '){
				matrix[i][2]='O';
				return;
			}
			else if(matrix[i][3]==' '){
				matrix[i][3]='O';
				return;
			}
		}
	}

	// Jika papan 1, 2, dan, 3 adalah 'X' atau 'O' maka papan 4 atau 5 adalah 'O'
	for(i=0;i<5;i++){

		if((matrix[i][0]=='X'&& matrix[i][1]=='X')||(matrix[i][1]=='X'&& matrix[i][2]=='X')){									
			if(matrix[i][3]==' '){
				matrix[i][3]='O';
				return;
			}
			else if(matrix[i][4]==' '){
				matrix[i][4]='O';
				return;
			}
		}
	}

	for(i=0;i<5;i++){

		if((matrix[i][0]=='O'&& matrix[i][1]=='O')||(matrix[i][1]=='O'&& matrix[i][2]=='O')){									
			if(matrix[i][3]==' '){
				matrix[i][3]='O';
				return;
			}
			else if(matrix[i][4]==' '){
				matrix[i][4]='O';
				return;
			}
		}
	}

	// Jika papan 1, 3, dan, 4 adalah 'X' atau 'O' maka papan 2 atau 5 adalah 'O'
	for(i=0;i<5;i++){

		if((matrix[i][0]=='X'&& matrix[i][2]=='X')||(matrix[i][2]=='X'&& matrix[i][3]=='X')){									
			if(matrix[i][1]==' '){
				matrix[i][1]='O';
				return;
			}
			else if(matrix[i][4]==' '){
				matrix[i][4]='O';
				return;
			}
		}
	}

	for(i=0;i<5;i++){

		if((matrix[i][0]=='O'&& matrix[i][2]=='O')||(matrix[i][2]=='O'&& matrix[i][3]=='O')){									
			if(matrix[i][1]==' '){
				matrix[i][1]='O';
				return;
			}
			else if(matrix[i][4]==' '){
				matrix[i][4]='O';
				return;
			}
		}
	}

	// Jika papan 1, 3, dan, 5 adalah 'X' atau 'O' maka papan 2 atau 4 adalah 'O'
	for(i=0;i<5;i++){

		if((matrix[i][0]=='X'&& matrix[i][2]=='X')||(matrix[i][2]=='X'&& matrix[i][4]=='X')){									
			if(matrix[i][1]==' '){
				matrix[i][1]='O';
				return;
			}
			else if(matrix[i][3]==' '){
				matrix[i][3]='O';
				return;
			}
		}
	}

	for(i=0;i<5;i++){

		if((matrix[i][0]=='O'&& matrix[i][2]=='O')||(matrix[i][2]=='O'&& matrix[i][4]=='O')){									
			if(matrix[i][1]==' '){
				matrix[i][1]='O';
				return;
			}
			else if(matrix[i][3]==' '){
				matrix[i][3]='O';
				return;
			}
		}
	}

	// Jika papan 1, 4, dan, 5 adalah 'X' atau 'O' maka papan 2 atau 3 adalah 'O'
	for(i=0;i<5;i++){

		if((matrix[i][0]=='X'&& matrix[i][3]=='X')||(matrix[i][3]=='X'&& matrix[i][4]=='X')){									
			if(matrix[i][1]==' '){
				matrix[i][1]='O';
				return;
			}
			else if(matrix[i][2]==' '){
				matrix[i][2]='O';
				return;
			}
		}
	}

	for(i=0;i<5;i++){

		if((matrix[i][0]=='O'&& matrix[i][3]=='O')||(matrix[i][3]=='O'&& matrix[i][4]=='O')){									
			if(matrix[i][1]==' '){
				matrix[i][1]='O';
				return;
			}
			else if(matrix[i][2]==' '){
				matrix[i][2]='O';
				return;
			}
		}
	}

	// Jika papan 1, 3, dan, 4 adalah 'X' atau 'O' maka papan 1 atau 5 adalah 'O'
	for(i=0;i<5;i++){

		if((matrix[i][1]=='X'&& matrix[i][2]=='X')||(matrix[i][2]=='X'&& matrix[i][3]=='X')){									
			if(matrix[i][0]==' '){
				matrix[i][0]='O';
				return;
			}
			else if(matrix[i][4]==' '){
				matrix[i][4]='O';
				return;
			}
		}
	}

	for(i=0;i<5;i++){

		if((matrix[i][1]=='O'&& matrix[i][2]=='O')||(matrix[i][2]=='O'&& matrix[i][3]=='O')){									
			if(matrix[i][0]==' '){
				matrix[i][0]='O';
				return;
			}
			else if(matrix[i][4]==' '){
				matrix[i][4]='O';
				return;
			}
		}
	}

	// Jika papan 2, 3, dan, 5 adalah 'X' atau 'O' maka papan 1 atau 4 adalah 'O'
	for(i=0;i<5;i++){

		if((matrix[i][1]=='X'&& matrix[i][2]=='X')||(matrix[i][2]=='X'&& matrix[i][4]=='X')){									
			if(matrix[i][0]==' '){
				matrix[i][0]='O';
				return;
			}
			else if(matrix[i][3]==' '){
				matrix[i][3]='O';
				return;
			}
		}
	}

	for(i=0;i<5;i++){

		if((matrix[i][1]=='O'&& matrix[i][2]=='O')||(matrix[i][2]=='O'&& matrix[i][4]=='O')){									
			if(matrix[i][0]==' '){
				matrix[i][0]='O';
				return;
			}
			else if(matrix[i][3]==' '){
				matrix[i][3]='O';
				return;
			}
		}
	}

	// Jika papan 2, 4, dan, 5 adalah 'X' atau 'O' maka papan 1 atau 3 adalah 'O'
	for(i=0;i<5;i++){

		if((matrix[i][1]=='X'&& matrix[i][3]=='X')||(matrix[i][3]=='X'&& matrix[i][4]=='X')){									
			if(matrix[i][0]==' '){
				matrix[i][0]='O';
				return;
			}
			else if(matrix[i][2]==' '){
				matrix[i][2]='O';
				return;
			}
		}
	}

	for(i=0;i<5;i++){

		if((matrix[i][1]=='O'&& matrix[i][3]=='O')||(matrix[i][3]=='O'&& matrix[i][4]=='O')){									
			if(matrix[i][0]==' '){
				matrix[i][0]='O';
				return;
			}
			else if(matrix[i][2]==' '){
				matrix[i][2]='O';
				return;
			}
		}
	}

	// Jika papan 3, 4, dan, 5 adalah 'X' atau 'O' maka papan 1 atau 2 adalah 'O'
	for(i=0;i<5;i++){

		if((matrix[i][2]=='X'&& matrix[i][3]=='X')||(matrix[i][3]=='X'&& matrix[i][4]=='X')){									
			if(matrix[i][0]==' '){
				matrix[i][0]='O';
				return;
			}
			else if(matrix[i][1]==' '){
				matrix[i][1]='O';
				return;
			}
		}
	}

	for(i=0;i<5;i++){

		if((matrix[i][2]=='O'&& matrix[i][3]=='O')||(matrix[i][3]=='O'&& matrix[i][4]=='O')){									
			if(matrix[i][0]==' '){
				matrix[i][0]='O';
				return;
			}
			else if(matrix[i][1]==' '){
				matrix[i][1]='O';
				return;
			}
		}
	}

	// Pengecekan Baris

	// Jika papan 1 dan 2 adalah 'X' maka papan 3 adalah 'O'
	for(i=0;i<5;i++){

		if(matrix[i][0]=='X'&& matrix[i][1]=='X'){									
			if(matrix[i][2]==' '){
				matrix[i][2]='O';
				return;
			}
		}
	}

	// Jika papan 3 dan 4 adalah 'X' maka papan 2 atau 5 adalah 'O'
	for(i=0;i<5;i++){

		if(matrix[i][2]=='X'&& matrix[i][3]=='X'){									
			if(matrix[i][1]==' '){
				matrix[i][1]='O';
				return;
			}
			else if(matrix[i][4]==' '){
				matrix[i][4]='O';
				return;
			}
		}
	}

	// Jika papan 2 dan 3 adalah 'X' maka papan 1 atau 4 adalah 'O'
	for(i=0;i<5;i++){

		if(matrix[i][1]=='X'&& matrix[i][2]=='X'){									
			if(matrix[i][0]==' '){
				matrix[i][0]='O';
				return;
			}
			else if(matrix[i][3]==' '){
				matrix[i][3]='O';
				return;
			}
		}
	}

	// Jika papan 4 dan 5 adalah 'X' maka papan 3 adalah 'O'
	for(i=0;i<5;i++){

		if(matrix[i][3]=='X'&& matrix[i][4]=='X'){									
			if(matrix[i][2]==' '){
				matrix[i][2]='O';
				return;
			}
		}
	}

	// Jika papan 1 dan 3 adalah 'X' maka papan 2 adalah 'O'
	for(i=0;i<5;i++){

		if(matrix[i][0]=='X'&& matrix[i][2]=='X'){									
			if(matrix[i][1]==' '){
				matrix[i][1]='O';
				return;
			}
		}
	}

	// Jika papan 2 dan 4 adalah 'X' maka papan 3 adalah 'O'
	for(i=0;i<5;i++){

		if(matrix[i][1]=='X'&& matrix[i][3]=='X'){									
			if(matrix[i][2]==' '){
				matrix[i][2]='O';
				return;
			}
		}
	}

	// Jika papan 3 dan 5 adalah 'X' maka papan 4 adalah 'O'
	for(i=0;i<5;i++){

		if(matrix[i][2]=='X'&& matrix[i][4]=='X'){									
			if(matrix[i][3]==' '){
				matrix[i][3]='O';
				return;
			}
		}
	}

	// Pengecekan Kolom

	// Jika papan 1, 2, dan, 4 adalah 'X' atau 'O' maka papan 3 atau 5 adalah 'O'
	for(i=0;i<5;i++){

		if((matrix[0][i]=='X'&& matrix[1][i]=='X')||(matrix[1][i]=='X'&& matrix[3][i]=='X')){									
			if(matrix[2][i]==' '){
				matrix[2][i]='O';
				return;
			}
			else if(matrix[4][i]==' '){
				matrix[4][i]='O';
				return;
			}
		}
	}

	for(i=0;i<5;i++){

		if((matrix[0][i]=='O'&& matrix[1][i]=='O')||(matrix[1][i]=='O'&& matrix[3][i]=='O')){									
			if(matrix[2][i]==' '){
				matrix[2][i]='O';
				return;
			}
			else if(matrix[4][i]==' '){
				matrix[4][i]='O';
				return;
			}
		}
	}

	// Jika papan 1, 2, dan, 5 adalah 'X' atau 'O' maka papan 3 atau 4 adalah 'O'
	for(i=0;i<5;i++){

		if((matrix[0][i]=='X'&& matrix[1][i]=='X')||(matrix[1][i]=='X'&& matrix[4][i]=='X')){									
			if(matrix[2][i]==' '){
				matrix[2][i]='O';
				return;
			}
			else if(matrix[3][i]==' '){
				matrix[3][i]='O';
				return;
			}
		}
	}

	for(i=0;i<5;i++){

		if((matrix[0][i]=='O'&& matrix[1][i]=='O')||(matrix[1][i]=='O'&& matrix[4][i]=='O')){									
			if(matrix[2][i]==' '){
				matrix[2][i]='O';
				return;
			}
			else if(matrix[3][i]==' '){
				matrix[3][i]='O';
				return;
			}
		}
	}

	// Jika papan 1, 2, dan, 3 adalah 'X' atau 'O' maka papan 4 atau 5 adalah 'O'
	for(i=0;i<5;i++){

		if((matrix[0][i]=='X'&& matrix[1][i]=='X')||(matrix[1][i]=='X'&& matrix[2][i]=='X')){									
			if(matrix[3][i]==' '){
				matrix[3][i]='O';
				return;
			}
			else if(matrix[4][i]==' '){
				matrix[4][i]='O';
				return;
			}
		}
	}

	for(i=0;i<5;i++){

		if((matrix[0][i]=='O'&& matrix[1][i]=='O')||(matrix[1][i]=='O'&& matrix[2][i]=='O')){									
			if(matrix[3][i]==' '){
				matrix[3][i]='O';
				return;
			}
			else if(matrix[4][i]==' '){
				matrix[4][i]='O';
				return;
			}
		}
	}

	// Jika papan 1, 3, dan, 4 adalah 'X' atau 'O' maka papan 2 atau 5 adalah 'O'
	for(i=0;i<5;i++){

		if((matrix[0][i]=='X'&& matrix[2][i]=='X')||(matrix[2][i]=='X'&& matrix[3][i]=='X')){									
			if(matrix[1][i]==' '){
				matrix[1][i]='O';
				return;
			}
			else if(matrix[4][i]==' '){
				matrix[4][i]='O';
				return;
			}
		}
	}

	for(i=0;i<5;i++){

		if((matrix[0][i]=='O'&& matrix[2][i]=='O')||(matrix[2][i]=='O'&& matrix[3][i]=='O')){									
			if(matrix[1][i]==' '){
				matrix[1][i]='O';
				return;
			}
			else if(matrix[4][i]==' '){
				matrix[4][i]='O';
				return;
			}
		}
	}

	// Jika papan 1, 3, dan, 5 adalah 'X' atau 'O' maka papan 2 atau 4 adalah 'O'
	for(i=0;i<5;i++){

		if((matrix[0][i]=='X'&& matrix[2][i]=='X')||(matrix[2][i]=='X'&& matrix[4][i]=='X')){									
			if(matrix[1][i]==' '){
				matrix[1][i]='O';
				return;
			}
			else if(matrix[3][i]==' '){
				matrix[3][i]='O';
				return;
			}
		}
	}

	for(i=0;i<5;i++){

		if((matrix[0][i]=='O'&& matrix[2][i]=='O')||(matrix[2][i]=='O'&& matrix[4][i]=='O')){									
			if(matrix[1][i]==' '){
				matrix[1][i]='O';
				return;
			}
			else if(matrix[3][i]==' '){
				matrix[3][i]='O';
				return;
			}
		}
	}

	// Jika papan 1, 4, dan, 5 adalah 'X' atau 'O' maka papan 2 atau 3 adalah 'O'
	for(i=0;i<5;i++){

		if((matrix[0][i]=='X'&& matrix[3][i]=='X')||(matrix[3][i]=='X'&& matrix[4][i]=='X')){									
			if(matrix[1][i]==' '){
				matrix[1][i]='O';
				return;
			}
			else if(matrix[2][i]==' '){
				matrix[2][i]='O';
				return;
			}
		}
	}

	for(i=0;i<5;i++){

		if((matrix[0][i]=='O'&& matrix[3][i]=='O')||(matrix[3][i]=='O'&& matrix[4][i]=='O')){									
			if(matrix[1][i]==' '){
				matrix[1][i]='O';
				return;
			}
			else if(matrix[2][i]==' '){
				matrix[2][i]='O';
				return;
			}
		}
	}

	// Jika papan 2, 3, dan, 4 adalah 'X' atau 'O' maka papan 1 atau 5 adalah 'O'
	for(i=0;i<5;i++){

		if((matrix[1][i]=='X'&& matrix[2][i]=='X')||(matrix[2][i]=='X'&& matrix[3][i]=='X')){									
			if(matrix[0][i]==' '){
				matrix[0][i]='O';
				return;
			}
			else if(matrix[4][i]==' '){
				matrix[4][i]='O';
				return;
			}
		}
	}

	for(i=0;i<5;i++){

		if((matrix[1][i]=='O'&& matrix[2][i]=='O')||(matrix[2][i]=='O'&& matrix[3][i]=='O')){									
			if(matrix[0][i]==' '){
				matrix[0][i]='O';
				return;
			}
			else if(matrix[4][i]==' '){
				matrix[4][i]='O';
				return;
			}
		}
	}

	// Jika papan 2, 3, dan, 5 adalah 'X' atau 'O' maka papan 1 atau 4 adalah 'O'
	for(i=0;i<5;i++){

		if((matrix[1][i]=='X'&& matrix[2][i]=='X')||(matrix[2][i]=='X'&& matrix[4][i]=='X')){									
			if(matrix[0][i]==' '){
				matrix[0][i]='O';
				return;
			}
			else if(matrix[3][i]==' '){
				matrix[3][i]='O';
				return;
			}
		}
	}

	for(i=0;i<5;i++){

		if((matrix[1][i]=='O'&& matrix[2][i]=='O')||(matrix[2][i]=='O'&& matrix[4][i]=='O')){									
			if(matrix[0][i]==' '){
				matrix[0][i]='O';
				return;
			}
			else if(matrix[3][i]==' '){
				matrix[3][i]='O';
				return;
			}
		}
	}

	// Jika papan 2, 4, dan, 5 adalah 'X' atau 'O' maka papan 1 atau 3 adalah 'O'
	for(i=0;i<5;i++){

		if((matrix[1][i]=='X'&& matrix[3][i]=='X')||(matrix[3][i]=='X'&& matrix[4][i]=='X')){									
			if(matrix[0][i]==' '){
				matrix[0][i]='O';
				return;
			}
			else if(matrix[2][i]==' '){
				matrix[2][i]='O';
				return;
			}
		}
	}

	for(i=0;i<5;i++){

		if((matrix[1][i]=='O'&& matrix[3][i]=='O')||(matrix[3][i]=='O'&& matrix[4][i]=='O')){									
			if(matrix[0][i]==' '){
				matrix[0][i]='O';
				return;
			}
			else if(matrix[2][i]==' '){
				matrix[2][i]='O';
				return;
			}
		}
	}

	// Jika papan 3, 4, dan, 5 adalah 'X' atau 'O' maka papan 1 atau 2 adalah 'O'
	for(i=0;i<5;i++){

		if((matrix[2][i]=='X'&& matrix[3][i]=='X')||(matrix[3][i]=='X'&& matrix[4][i]=='X')){									
			if(matrix[0][i]==' '){
				matrix[0][i]='O';
				return;
			}
			else if(matrix[1][i]==' '){
				matrix[1][i]='O';
				return;
			}
		}
	}

	for(i=0;i<5;i++){

		if((matrix[2][i]=='O'&& matrix[3][i]=='O')||(matrix[3][i]=='O'&& matrix[4][i]=='O')){									
			if(matrix[0][i]==' '){
				matrix[0][i]='O';
				return;
			}
			else if(matrix[1][i]==' '){
				matrix[1][i]='O';
				return;
			}
		}
	}

	// Pengecekan Kolom

	// Jika papan 1 dan 2 adalah 'X' maka papan 3 adalah 'O'
	for(i=0;i<5;i++){
		if(matrix[0][i]=='X'&& matrix[1][i]=='X'){									
			if(matrix[2][i]==' '){
				matrix[2][i]='O';
				return;
			}
		}
	}

	// Jika papan 3 dan 4 adalah 'X' maka papan 2 adalah 'O'
	for(i=0;i<5;i++){
		if(matrix[2][i]=='X'&& matrix[3][i]=='X'){									
			if(matrix[1][i]==' '){
				matrix[1][i]='O';
				return;
			}
			else if(matrix[4][i]==' '){
				matrix[4][i]='O';
				return;
			}
		}
	}

	// Jika papan 2 dan 3 adalah 'X' maka papan 1 atau 4 adalah 'O'
	for(i=0;i<5;i++){

		if(matrix[1][i]=='X'&& matrix[2][i]=='X'){									
			if(matrix[0][i]==' '){
				matrix[0][i]='O';
				return;
			}
			else if(matrix[3][i]==' '){
				matrix[3][i]='O';
				return;
			}
		}
	}
	
	// Jika papan 4 dan 5 adalah 'X' maka papan 3 adalah 'O'
	for(i=0;i<5;i++){
		if(matrix[3][i]=='X'&& matrix[4][i]=='X'){									
			if(matrix[2][i]==' '){
				matrix[2][i]='O';
				return;
			}
		}
	}

	// Jika papan 1 dan 3 adalah 'X' maka papan 2 adalah 'O'
	for(i=0;i<5;i++){
		if(matrix[0][i]=='X'&& matrix[2][i]=='X'){									
			if(matrix[1][i]==' '){
				matrix[1][i]='O';
				return;
			}
		}
	}
	
	// Jika papan 2 dan 4 adalah 'X' maka papan 3 adalah 'O'
	for(i=0;i<5;i++){
		if(matrix[1][i]=='X'&& matrix[3][i]=='X'){									
			if(matrix[2][i]==' '){
				matrix[2][i]='O';
				return;
			}
		}
	}
	
	// Jika papan 3 dan 5 adalah 'X' maka papan 4 adalah 'O'
	for(i=0;i<5;i++){
		if(matrix[2][i]=='X'&& matrix[4][i]=='X'){									
			if(matrix[3][i]==' '){
				matrix[3][i]='O';
				return;
			}
		}
	}

	// Pengecakan Diagonal

	if(matrix[0][0]=='X'&& matrix[1][1]=='X'){

		if(matrix[2][2]==' '){
			matrix[2][2]='O';
			return;
		}
	}

	if(matrix[0][0]=='X'&& matrix[2][2]=='X'){

		if(matrix[1][1]==' '){
			matrix[1][1]='O';
			return;
		}
	}

	if(matrix[3][3]=='X'&& matrix[1][1]=='X'){

		if(matrix[2][2]==' '){
			matrix[2][2]='O';
			return;
		}
	}

	if(matrix[2][2]=='X'&& matrix[4][4]=='X'){

		if(matrix[3][3]==' '){
			matrix[3][3]='O';
			return;
		}
	}

	if(matrix[1][1]=='X'&& matrix[2][2]=='X'){

		if(matrix[0][0]==' '){
			matrix[0][0]='O';
			return;
		}
		else if(matrix[3][3]==' '){
			matrix[3][3]='O';
			return;
		}
	}

	if(matrix[2][2]=='X'&& matrix[3][3]=='X'){

		if(matrix[1][1]==' '){
			matrix[1][1]='O';
			return;
		}
		else if(matrix[4][4]==' '){
			matrix[4][4]='O';
			return;
		}

	}

	if(matrix[0][4]=='X'&& matrix[1][3]=='X'){

		if(matrix[2][2]==' '){
			matrix[2][2]='O';
			return;
		}
	}

	if(matrix[0][4]=='X'&& matrix[2][2]=='X'){

		if(matrix[1][3]==' '){
			matrix[1][3]='O';
			return;
		}
	}

	if(matrix[3][1]=='X'&& matrix[1][3]=='X'){

		if(matrix[2][2]==' '){
			matrix[2][2]='O';
			return;
		}
	}

	if(matrix[2][2]=='X'&& matrix[4][0]=='X'){

		if(matrix[3][1]==' '){
			matrix[3][1]='O';
			return;
		}
	}

	if(matrix[2][2]=='X'&& matrix[3][1]=='X'){

		if(matrix[1][3]==' '){
			matrix[1][3]='O';
			return;
		}
		else if(matrix[4][0]==' '){
			matrix[4][0]=='O';
			return;
		}
	}

	if(matrix[1][3]=='X'&& matrix[2][2]=='X'){

		if(matrix[0][4]==' '){
			matrix[0][4]='O';
			return;
		}
		else if(matrix[3][1]==' '){
			matrix[3][1]='O';
			return;
		}

	}

	// Jika satu papan diisi 'X' maka komputer akan mengisi 'O' pada bagian kiri, kanan, atas, atau bawah.
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			if(matrix[i][j]=='X'){

				if(matrix[i][--j]==' '){
					matrix[i][j]='O';
					return;
				}

				else if(matrix[i][++j]==' '){
					matrix[i][j]='O';
					return;
				}
				else if(matrix[++i][j]==' '){
					matrix[i][j]='O';
					return;
				}

				else if(matrix[--i][j]==' '){
					matrix[i][j]='O';
					return;
				}

			}
		}
	}

}