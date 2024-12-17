#include <iostream>
class Student{
	public:
		int id;
		double score;
};

void max(Student* students, int n){
	int maxIndex = 0;
	for(int i = 1;i < n;i++){
		if(students[i].score > students[maxIndex].score){
			maxIndex = i;
		}
	}
	std::cout << students[maxIndex].id << std::endl;
}

int main(){
	Student students[5] = {
	{1,85.5},
	{2,90.0},
	{3,78.5},
	{4,60.0},
	{5,100.0}
	};
	
	max(students,5);
	
	return 0;
}