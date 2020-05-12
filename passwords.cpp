#include <bits/stdc++.h>
using namespace std;
int n, k;
void hello(){
	cout << "Welcome To Password Generator \n";
	cout << "Enter Length of Password you want, and how many passwords you want to generate : ";
}
vector <string> v(k);
void generate(){
	char a='!';
	string s="";
	while(k--){
		for(int i=0;i<n;i++){
			s+=(a+rand()%94);
		}
		v.emplace_back(s);
		s="";
	}
}
int main(){
	hello();
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> n >> k;
	generate();
	auto start=clock();
	ofstream MyFile("Password"+to_string(rand()%1000000007)+".txt" );
	for(int i=0;i<v.size();i++){
		MyFile << v[i];
		MyFile << "\n";
	}
	MyFile.close();
	auto endi=clock();
	cout << "File Created in "<<(double)(endi-start)/CLOCKS_PER_SEC << "s" << endl;
	return 0;
}
