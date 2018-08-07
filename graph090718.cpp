#include <bits/stdc++.h>
using namespace std;
const string FILE_NAME="graph.input";
const int MAXN=2005;
const int COM=0, SPAN=1, BRIDGE=2;
int n; //number of verticals
int m; //number of edges

/* IMPLEMENT DISJOINT SET*/
int father[MAXN];
void Init(){
	for(int i=1;i<=n;i++) father[i]=i;
}
int find(int v){ //find number of group which contain vertical v
	while(father[v]!=v) v=father[v];
	return v;	
}
int Union(int x, int y){ //return status: 0 if x and y in a same group. Other wise, return 1
	int fx=find(x); //find group which contain x;
	int fy=find(y); //find group which contain y;
	if(fx==fy) return 0; //same group
	if(fx<fy)	father[fy]=fx;
	else father[fx]=fy;
	return 1;
}

/*END IMPLEMENT DISJOINT SET*/

/*IMPLENMENT GRAPH*/
struct Edge{
	int x, y;
	int type; //type of edge
};
Edge edge[MAXN];
int connectedComponents(int k=0){ // forEach through all edges except edge k
	Init(); //remember reinit
	int ans=n;
	for(int i=1;i<k;i++) ans-=Union(edge[i].x, edge[i].y);
	for(int i=k+1;i<=m;i++) ans-=Union(edge[i].x, edge[i].y);
	return ans;
}
void SpanTree(){
	Init();
	for(int i=1;i<=m;i++){
		if(Union(edge[i].x,edge[i].y)==1){
			edge[i].type=SPAN;
		}
	}
}
void BridgeEdges(){
	SpanTree();
	for(int i=1;i<=m;i++){
		if(edge[i].type==SPAN){
			if(connectedComponents(i)>1){
				edge[i].type=BRIDGE;
			}
		}
	}
}
/*END IMPLEMENT GRAPH*/
void read(){
	ifstream ifs(FILE_NAME);
	ifs>>n;
	int x, y, cnt=1;
	m=0;
	while(1){
		ifs>>x>>y;
		if(x==0 && y==0) break;
		edge[cnt].x=x; edge[cnt].y=y;
		edge[cnt].type=COM;
		cnt++; ++m;
	}
	ifs.close();
}
void findSpanTree(){
	cout<<"List of edge in SpanTree:\n";
	read();
	SpanTree();
	for(int i=1;i<=m;i++){
		if(edge[i].type==SPAN) {
			cout<<edge[i].x<<"\t"<<edge[i].y<<"\n";
		}
	}
	cout<<"\n";
}
void findBridgeEdge(){
	cout<<"List of bridge edge:\n";
	read();
	BridgeEdges();
	for(int i=1;i<=m;i++){
		if(edge[i].type==BRIDGE){
			cout<<edge[i].x<<"\t"<<edge[i].y<<"\n";
		}
	}
}
int main(){
	findSpanTree();
	findBridgeEdge();
	return 0;
}

