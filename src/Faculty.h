#pragma once
#include"Person.h"
#include"Section_fwd.h"
#include<string>
#include<vector>
using std::string;
using std::vector;

namespace LMS {
	//teacher
	class Faculty :
		protected Person
	{
	protected:
		vector<Section*> fsections;
	public:
		Faculty();
		Faculty(string name_, string dob_, string email_);
		Faculty(string name_, string dob_, string email_, vector<Section*>fsections_);
		~Faculty();

		//bool addSection();
	};
}
