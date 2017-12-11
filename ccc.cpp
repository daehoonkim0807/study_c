class Employee
{
	string name;
	int age;

	string position; // 직책 (이름)
	int rank; // 순위 (값이 클 수록 높은 순위)

public:

	Employee(string name, int age, string position, int rank) 
		: name(name), age(age), position(position), rank(rank) {}

	// 복사 생성자
	Employee(const Employee& employee)
	{
		name = employee.name;
		age = employee.age;
		position = employee.position;
		rank = employee.rank;
	}

	// 디폴트 생성자
	Employee () {}

	void print_info()
	{
		cout << name << " (" << position << " , " << age << ") ==> " << calculate_pay() << "만원" << endl;
	}
	int calculate_pay()
	{
		return 200 + rank * 50;
	}
};

