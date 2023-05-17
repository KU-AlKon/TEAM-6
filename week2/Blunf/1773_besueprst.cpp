#include <iostream>
#include <cstdio>

using namespace std;
 
int main(){
	int pnum, totaltime;
	std::scanf("%d %d", &pnum, &totaltime);

	int count=0;
	int arr[pnum];
	for(int i=0;i<pnum;i++) cin >> arr[i];
	
	int ans[totaltime];
	for(int i=0;i<pnum; i++){
		for(int k=0;k<totaltime/arr[k];k++){
			if(ans[(k+1)*arr[i]-1]!=1){ans[(k+1)*arr[i]-1]=1;}
		}
	}
	for(int i=0;i<totaltime;i++){
		if(ans[i]==1){count++;}
	}
	cout << count;
	cout << "\n";

	return 0;
}
