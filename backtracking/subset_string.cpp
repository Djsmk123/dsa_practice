#include<bits/stdc++.h>
using namespace std;
void findSubSets(char*input,char *output,int i,int j){
  //base case
  if(input[i]=='\0')
  {
    output[j]='\0';
    cout<<output<<endl;
    return;
  }
  //rec case

  //include ith character
  output[j]=input[i];
  findSubSets(input,output,i+1,j+1);

  //exclude ith character
  //overwriting
  findSubSets(input,output,i+1,j);


}
int main(){
    char input[100];
    char output[100];
    cin>>input;
    findSubSets(input,output,0,0);
}