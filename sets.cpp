#include <iostream>
#include<vector>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
	int set1[50],set2[50],size1,size2,i,j;
void input();
void processintersection();
void processunion();

int main(int argc, char** argv) {
    input();
processintersection();
processunion();
	return 0;
}

void input(){
	cout<<"Enter size of set 1: "<<endl;
	cin>>size1;
	cout<<"Enter set elements: "<<endl;
	for(i=0;i<size1;i++){
		cin>>set1[i];
}
 		cout<<"Enter size of set2"<<endl;	
		cin>>size2;
		cout<<"enter set2 elements"<<endl;
		for(j=0;j<size2;j++){
		cin>>set2[j];
}


}
void processintersection(){
	cout<<"the intersection of these sets: ";
for(i=0;i<size1;i++){
	for(j=0;j<size2;j++){
	if(set1[i]==set2[j])
	cout<<set1[i]<<",";
}
}
}

void processunion(){
	vector<int> unionset;
	for(i=0;i<size1;i++){
	unionset.push_back(set1[i]);
}	
	for(i=0;i<size1;i++){
		bool duplicate = false;
	 for(j=0;j<size2;j++){
	if(set1[i]==unionset.at(j)){
             duplicate=true; 
}
}
 		   if(duplicate){
 		   	unionset.push_back(set2[i]);
		    }
}
cout<<"\nThe union of two sets: ";
for(i=0;i<unionset.size();i++)
						  cout<<unionset.at(i)<<",";
}


