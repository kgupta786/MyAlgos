#include<iostream>
using namepsace std;
int main(int argc, char const *argv[])
{
int arr[6]={1,2,3,4,5,6};
int k1;
cin>>k1;
int result=k1%6;
while(result>0){
	int temp=arr[0];
for(int i=0;i<5;i++){

	x[i]=x[i+1];
}
x[i+1]=temp;

result--;
}

for(int i=0;i<6;i++){
	cout<<x[i]<<endl;
}





	return 0;
}