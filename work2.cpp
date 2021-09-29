#include <bits/stdc++.h>
using namespace std;
string s1, s2;
int s3;

#define fi first 
#define se second

int tot = 0;
vector< pair<string, int> > vec[300];
map<string, int>mp;
map<int, string>name;

void fun(){
	for(int i = 1; i <= tot; i++){
		cout << name[i] << endl;
		for(int j = 0; j < vec[i].size(); j++){
			cout << vec[i][j].fi << " " << vec[i][j].se <<endl;
		}
		cout << endl;
	}
}

int main(){
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
	for(int i = 1; i <= 300; i++) vec[i].clear();
	while(cin >> s1){
		cin >> s2 >> s3;
		if(!mp[s1]){
			mp[s1] = ++tot;
			name[tot] = s1;
		}
		vec[mp[s1]].push_back(make_pair(s2, s3));
	}
	fun();
	return 0;
}
