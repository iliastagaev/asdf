#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <sstream>

using namespace std;

int main(){
int  room;
int room1;
int room2;
float a;
string score;
string competitor;
cin >> room;

map<string, double> m;
for(int i = 0; i < room;i++){
cin >> room1;
for(int j = 0; j < room1;j++){
	stringstream ss;
	cin >> score >> competitor;
	ss << score;
	ss >> a;
	
	m[competitor] = a;
	ss.clear();
}
}

cout << m.size() << endl;

map <string, double>::iterator it = m.begin();

for(it; it != m.end();it++){

	cout << (*it).second << " " << (*it).first << endl;
} 

return 0;
}