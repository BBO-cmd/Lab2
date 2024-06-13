#include<iostream>
#include<vector>

using namespace std;

int N,M;
vector<int> sequence;
vector<vector<int>> vec_sequence;

//first draft

//from부터 to까지 중에 n개 선택해서 push-back/ from은 반드시 포함
void select(int from, int to, int n){
   if(to-from+1==n){ 
      for(int i=from; i<to+1; i++){
         sequence.pushback(i);
      }
   }
   else
   sequence.pushback(from);
   select(from+1, to, n-1);
}

void func(int cnt) {
//길이 1인거부터 M인거까지
for(int i=1; i<M+1; i++){
   //범위가 1부터 N, 2부터 N, ...
      for(int j=1; j<N+1; j++){
         select(j,N,i);
      }
   }
}

int main() {
   cin >> N >> M;
   func(0);
}
