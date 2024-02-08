#include <iostream>
#include "/home/Beapoe/C++/Project/NeuralNet/src/tools.h"
#include "/home/Beapoe/C++/Project/NeuralNet/src/Layer.h"
#include "/home/Beapoe/C++/Project/NeuralNet/src/Neuron.h"
#include <list>
using namespace std;

int main(){
	Layer layer = Layer(input,10,linear);
	cout<<layer.getNumNeuronsInLayer()<<endl;
	list<double> ans;
	ans = layer.getBiases();
	cout<<getL(1,ans)<<endl;
	cout<<"Succes"<<endl;
}
