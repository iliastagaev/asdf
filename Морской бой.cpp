#include <iostream>
//printf("%10.15f", maxlength);
using namespace std;

int main(){
	int n, m;

	cin >> n >> m;

	char a[n][m];

	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cin >> a[i][j];
		}
	}
	int cnt = 0;

	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			if(a[i][j] == '*'){
				continue;
			}
			if(i == 0 && j == 0){
				if(a[i][j + 1] == '.' && a[i + 1][j] == '.'){
					cnt++;
					continue;
				}
			} if(i == n - 1 && j == m - 1){
				if(a[i][j - 1] == '.' && a[i - 1][j] == '.'){
					cnt++;
					continue;
				}
			} if(i == 0 && j == m - 1){
				if(a[i + 1][j] == '.' && a[i][j - 1] == '.'){
					cnt++;
					continue;
				}
			} if(i == n - 1 && j == 0){
                   if(a[i - 1][j] == '.' && a[i][j + 1] == '.'){
                   	cnt++;
                   	continue;
                   }
            } if(i == 0){
            	if(a[i + 1][j] == '.' && a[i][j - 1] == '.' && a[i][j + 1] == '.'){
            		cnt++;
            		continue;
            	}
            } if(i == n - 1){
            	if(a[i - 1][j] == '.' && a[i][j - 1] == '.' && a[i][j + 1] == '.'){
            		cnt++;
            		continue;
            	}
            } if(j == 0){
            	if(a[i][j + 1] == '.' && a[i + 1][j] == '.' && a[i - 1][j] == '.'){
            		cnt++;
            		continue;
            	}
            } if(j == m - 1){
            	if(a[i][j - 1] == '.' && a[i + 1][j] == '.' && a[i - 1][j] == '.'){
            		cnt++;
            		continue;
            	}
            }



             if(i > 0 && i < n - 1 && j > 0 && j < m - 1) {
            	if(a[i + 1][j] == '.' && a[i - 1][j] == '.' && a[i][j + 1] == '.' && a[i][j - 1] == '.'){
                     cnt++;
                     continue;
            }
        }	
    }
}	
	
	cout<<"Ebat u tebya  xuevii cod and it donot work"<<endl;
	cout << cnt << endl;

	return 0;
}
