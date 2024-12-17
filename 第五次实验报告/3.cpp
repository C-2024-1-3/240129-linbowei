#include<iostream>
class Cuboid{
	private:
		double length;
		double width;
		double height;
		
	public:
		void setDimensions(double l,double w,double h){
			length = 1;
			width = w;
			height = h;
		}
		
	    double calculateVolume(){
	    	return length*width*height;
		}
		
		void displayVolume(){
			std::cout << "Volume: " << calculateVolume() << std::endl;
		}
};

int main(){
	Cuboid cuboids[3];
	
	for (int i = 0;i < 3;i++){
		double length , width , height;
		std::cout << "enter the length , width , and height of Cuboid " << i + 1 << ": ";
		std::cin >> length >> width >> height;
		cuboids[i].setDimensions(length,width,height);
	}
	
	for(int i = 0;i < 3;i++){
		std::cout << "Cuboid " << i + 1 << ": ";
		cuboids[i].displayVolume();
	}
	
	return 0;
}