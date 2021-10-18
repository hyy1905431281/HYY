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


int main(int argc, char *argv[]){
	freopen(argv[1], "r", stdin);
	freopen(argv[2], "w", stdout);
	for(int i = 1; i <= 300; i++) vec[i].clear();
	while(cin >> s1){
		cin >> s2 >> s3;
		if(!mp[s1]){
			mp[s1] = ++tot;
			name[tot] = s1;
		}
		vec[mp[s1]].push_back(make_pair(s2, s3));
	}
	if(argc == 4){
		int x = strlen(argv[3]);
		string chg = "";
		for(int i = 0; i < x; i++){
			chg += argv[3][i];
		}
		for(int i = 1; i <= tot; i++){
			if(x != 0){
				if(name[i] != chg){
					continue;
				}
			}
			cout << name[i] << endl;
			for(int j = 0; j < vec[i].size(); j++){
				cout << vec[i][j].fi << " " << vec[i][j].se <<endl;
			}
			cout << endl;
		}
	}
	else{
		for(int i = 1; i <= tot; i++){
			cout << name[i] << endl;
			for(int j = 0; j < vec[i].size(); j++){
				cout << vec[i][j].fi << " " << vec[i][j].se <<endl;
			}
			cout << endl;
		}

	}
	return 0;
}

