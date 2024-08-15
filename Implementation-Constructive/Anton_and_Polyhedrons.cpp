#include<iostream>
#include<string>

using namespace std;


void solve(string s, int &total_sides){
	if(s=="Tetrahedron"){
			total_sides += 4;

	}
	else if(s=="Cube"){
		total_sides += 6;
	}
	else if(s=="Octahedron"){
		total_sides += 8;
		
	}
	else if(s=="Dodecahedron"){
		total_sides += 12;
		
	}
	else if(s=="Icosahedron"){
		total_sides += 20;
		
	}
	else{
		cout<<"No value found";
		return;
	}

}


int main(){

	int t;
	int total_sides = 0;
	cin>>t;
	string s;
	
	while(t --){
		cin>>s;
		solve(s, total_sides);
	}

	cout<<total_sides;
	return 0;
}
